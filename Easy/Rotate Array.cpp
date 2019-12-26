class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k == 0 || nums.size() < 2){return;}
        int copy [nums.size()] = {0};
        
        for(int i = 0; i < nums.size(); i++){
            copy[i] = nums[i];    
        }
        
        for(int i = 0; i < nums.size(); i++){
            int j = i + k;
            while(j > nums.size() - 1){j -= nums.size();}
            nums[j] = copy[i];
        }
        
    }
};