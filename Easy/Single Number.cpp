class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.count(nums[i]) > 0){
                map[nums[i]]++;
            }
            else{
                map.insert(std::pair<int,int>(nums[i],1));
            }
        }
        
        for(auto c:map){
            if(c.second !=2){
                return c.first;
            }
        }
        return -1;
    }
};