void moveZeroes(int* nums, int numsSize){
    if(nums == NULL || numsSize == 0u) {return;}
    
    int insert_idx = 0u;
    for(int i = 0 ; i < numsSize ; i++) {
        if(nums[i] != 0u) {
            nums[insert_idx++] = nums[i];
        }
    }
    
    for(int i = insert_idx ; i < numsSize ; i++) {
        nums[i] = 0u;
    }
    
}