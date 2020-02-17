
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroEnd = 0;
        int twoBegin = nums.size() - 1;
        int i = 0;
        while(i < nums.size() && i <= twoBegin){
            if(nums[i] == 0){
                if(i > zeroEnd){
                    int temp = nums[zeroEnd];
                    nums[zeroEnd] = nums[i];
                    nums[i] = temp;   
                }
                i++;
                zeroEnd++;
            }
            else if(nums[i] == 1){
                i++;
            }
            else{
                int temp = nums[twoBegin];
                nums[twoBegin] = nums[i];
                nums[i] = temp;
                twoBegin--;
            }
        }
    }
};