class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    std::unordered_map<string, int> map;
    vector<vector<string>> output;
    
    for(int i = 0; i < strs.size(); i++){
        string temp = strs[i];
        sort(strs[i].begin(), strs[i].end());
        if(map.count(strs[i]) > 0){
            output[map.at(strs[i])].push_back(temp);    
        }
        else{
            map.insert(std::pair<string,int>(strs[i], output.size()));
            output.push_back(vector<string>{temp});
        }
    }
    return output;
        
    }
};