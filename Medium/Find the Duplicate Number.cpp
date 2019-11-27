class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size() == 0){return 0;}
        int runner = 0;
        int runner2 = nums[0];
        while(runner != runner2){
            runner = nums[runner];
            runner2 = nums[nums[runner2]];
        }
        int runner3 = 0;
        while(runner3 < nums.size()){
            if(nums[runner3] == runner2){
                return nums[runner3];
            }
            runner3++;
        }
        return 0;
        
    }
};