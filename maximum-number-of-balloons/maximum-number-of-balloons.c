int maxNumberOfBalloons(char* text) {

    /* count all characters */
    int32_t _memo[26u] = {0};
    for (int i = 0; i < strlen(text); i++) {
        _memo[text[i] - 'a']++;
    }

    /* reverse count against "balloon" string */
    const char* str = "balloon";
    int count = 0;
    while (1) {
        /* every time this loop completes, a new word is possible */
        for (int i = 0; i < strlen(str); i++) {
            if (_memo[str[i] - 'a'] <= 0) {
                return count;
            }
            _memo[str[i] - 'a']--;
        }
        count++;
    }
    return count;
}