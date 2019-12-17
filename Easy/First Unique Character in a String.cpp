class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(int i = 0; i < s.length(); i++){
            if(map.count(s[i]) > 0){
                map[s[i]] = -1;
            }
            else{
                map.insert(std::pair<char,int>(s[i],i));
            }
        }
        
        int min = INT_MAX;
        for(auto it:map){
            if(it.second != -1 && it.second < min){min = it.second;}
        }
        
        if(min == INT_MAX){return -1;}
        return min;
        
    }
};