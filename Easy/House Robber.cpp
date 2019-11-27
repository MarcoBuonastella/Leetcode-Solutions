class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> usedNums = vector<int>(nums.size(),0);
        vector<int> sum = vector<int>(nums.size(),0);
        if(nums.size() == 0){return 0;}
        usedNums[0] = 2;
        sum[0] = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if(usedNums[i-1] == 1){
                usedNums[i] = 2;
                sum[i] = sum[i-1] + nums[i];
            }
            else{
                if(i == 1){
                    if(nums[i] > nums[i-1]){
                        sum[i] = nums[i];
                        usedNums[i] = 2;
                    } 
                    else{
                        sum[i] = nums[i-1];
                        usedNums[i] = 1;    
                    }
                }
                else{
                    if(sum[i-2] + nums[i] > sum[i-1]){
                        sum[i] = sum[i-2] + nums[i];
                        usedNums[i] = 2;
                    } 
                    else{
                        sum[i] = sum[i-1];
                        usedNums[i] = 1;    
                    }
                }
            
            }
        
        }
        return sum[nums.size()-1];
    }
    
    // 2 7 9 3 1
    
  
};