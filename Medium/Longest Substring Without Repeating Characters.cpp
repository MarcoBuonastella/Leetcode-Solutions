class Solution {
public:
    //idea use rolling window method
    //if we see a letter with last seen > start of window, set max , set window start to index after last 
    
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int temp_counter = 0;
        int curr_start = 0;
        std::unordered_map<char,int> map;
        
        for(int i = 0; i < s.length(); i++){
   
            if(map.count(s[i]) > 0){
                if(map.at(s[i]) >= curr_start){
                     maxLength = max(maxLength, temp_counter);
                     curr_start = map.at(s[i]) + 1;
                     map.at(s[i]) = i;
                     temp_counter = i - curr_start + 1;
                    
                }
                else{
                    map.at(s[i]) = i;
                    temp_counter++;
                    maxLength = max(maxLength, temp_counter);
                }
            } 
            
            else{
                temp_counter++; 
                maxLength = max(maxLength, temp_counter);
                map.insert(std::pair<char,int>(s[i],i));
            }
        }
        return maxLength;
    }
};