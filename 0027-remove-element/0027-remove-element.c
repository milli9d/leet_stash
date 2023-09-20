int removeElement(int* nums, int numsSize, int val) {
    
    int count = 0;

    for (int i = 0; i < numsSize; i++)
        if (nums[i] != val) 
            nums[i - count] = nums[i];
        else 
            count++;

    return (numsSize - count);
}