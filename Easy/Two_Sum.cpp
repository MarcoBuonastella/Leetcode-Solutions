class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(seen.count(diff) > 0){
                return vector<int>{seen.at(diff),i};
            }
            else {
                seen.insert(std::pair<int,int>(nums[i],i));
            }
        }
        return vector<int>{0,0};
    }
};