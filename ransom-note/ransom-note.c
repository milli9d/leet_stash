bool canConstruct(char* ransomNote, char* magazine) {
    /* memoize magazine */
    int32_t _memo[26u] = {0u};
    size_t len_mag = strlen(magazine);
    for (int i = 0; i < len_mag; i++) {
        _memo[magazine[i] - 'a']++;
    }

    /* iterate through ransom note and compare against memo */
    size_t len_note = strlen(ransomNote);
    for (int i = 0; i < len_note; i++) {
        /* if any character is used up then ransom note is not possible */
        if (_memo[ransomNote[i] - 'a'] <= 0) {
            return false;
        }
        _memo[ransomNote[i] - 'a']--;
    }

    return true;
}