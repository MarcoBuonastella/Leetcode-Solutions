class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int>found = vector<int>(nums.size(),0);
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] > 0 && nums[i] <= nums.size()){
                found[nums[i] - 1] = 1;
            }
        }
        for(int i = 0; i < found.size(); i++){
            if(found[i] == 0){
                return i+1;
            }
        }
        return found.size() + 1;
    }
};