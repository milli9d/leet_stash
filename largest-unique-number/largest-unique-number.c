int largestUniqueNumber(int* nums, int numsSize) {
    uint16_t counts[1001u] = {0u};

    for (int i = 0; i < numsSize; i++) {
        counts[nums[i]]++;
    }

    int max = 0;
    for (int i = 0; i < 1001; i++) {
        if (counts[i] == 1 && i > max) {
            max = i;
        }
    }

    return (max) ? max : -1;
}