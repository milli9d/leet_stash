uint32_t count_bits(uint32_t n) { 
    int out = 0u;
    while(n) {
        n = n & (n - 1);
        out++;
    }
    return out;
}

int minFlips(int a, int b, int c) {
    return count_bits((a | b) ^ c) + count_bits((a & b) & ((a | b) ^ c));    
}