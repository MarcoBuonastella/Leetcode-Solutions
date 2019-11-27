var removeDuplicates = function(nums) {
    var currNum
    for (i = 0; i < nums.length; i++){
        if(currNum == nums[i]){
            nums.splice(i,1)
            i--;
            continue
        }
        currNum = nums[i]
    }
    
};