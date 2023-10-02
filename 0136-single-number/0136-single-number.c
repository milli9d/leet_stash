int singleNumber(int* nums, int numsSize){
    /* XOR with itself is 0u , and XOR with 0u is itself */
    int out = 0u;
    for(int i = 0 ; i < numsSize ; i++) {
        out ^= nums[i];
    }

    return out;
}