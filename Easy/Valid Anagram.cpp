class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length() != t.length()){return false;}
        
       int map [26] = {0};
        for(int i = 0; i < s.length(); i++){
            map[s[i]-97]++;
        }
        for(int j = 0; j < t.length(); j++){
            map[t[j]-97]--;  
        }
        for(int j = 0; j < 26; j++){
            if(map[j] != 0){return false;}    
        }
        return true;
    }
};