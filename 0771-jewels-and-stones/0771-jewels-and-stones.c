int numJewelsInStones(char* jewels, char* stones) {
    int32_t _memo[256u] = {0u};

    size_t sz_stones = strlen(stones);
    for (size_t i = 0; i < sz_stones; i++) {
        _memo[stones[i]]++;
    }

    int count = 0;
    size_t sz_jewels = strlen(jewels);
    for (size_t i = 0; i < sz_jewels; i++) {
        count += _memo[jewels[i]];
    }

    return count;
}