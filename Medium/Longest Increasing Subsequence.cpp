class Solution {
public:
    
    
    /*idea
    start at the end index
    keep track of min number seen for subsequence ending at index i
    for all indices j > i, check if i is smaller than min, if so, make count[i] + 
    */
    
    
    int lengthOfLIS(vector<int>& nums) {
        vector<int> subsequenceCount = vector<int> (nums.size(), 0);
        int ovr_max = 0;
         
        for(int i = 0; i < nums.size(); i++){
            int maxCount = 0;
            for(int j = i; j >= 0; j--){
                if(nums[i] > nums[j] && subsequenceCount[j] > maxCount){
                    maxCount = subsequenceCount[j];
                }  
            }
            subsequenceCount[i] = maxCount + 1;
            ovr_max = max(ovr_max,subsequenceCount[i]);
        }
        
        return ovr_max;
    }
};