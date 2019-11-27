class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> visited = vector<int>(nums.size(),0); 
        bool result = false;
        canJumpHelper(nums, visited, 0, result);
        return result;
    }
    void canJumpHelper(vector<int>& nums, vector<int>&visited, int i, bool &result){
        //std::cout << i <<endl;
        if(i == nums.size()-1){
            result = true;
            return;
        }
        int max_jump = nums[i];
        visited[i] = 1;
        for(int j = 1; j <= max_jump; j++){
            if(i+j <= nums.size() - 1 && visited[i+j] == 0){
                //std::cout << "calling " << i+j << " From " << i<<endl;
                canJumpHelper(nums,visited,i+j,result);    
            }
        }
    }
};