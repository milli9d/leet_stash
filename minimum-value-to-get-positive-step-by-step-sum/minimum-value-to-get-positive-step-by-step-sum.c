int minStartValue(int* nums, int numsSize) {

    /* calculate running sum of entire array */
    int runningSum = 0;
    for (int i = 0; i < numsSize; i++) {
        runningSum += nums[i];
        nums[i] = runningSum;
    }

    /* find minimum val in array */
    int min = INT32_MAX;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    /* find minimum positive sum */
    int sum = (1 - min);
    sum = (sum <= 0) ? 1 : sum;

    return sum;
}