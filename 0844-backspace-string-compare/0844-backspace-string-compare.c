const char* parse(const char* s) {
    size_t len = strlen(s);
    if (len <= 1u) {
        return s;
    }

    char* out = (char*)calloc(sizeof(char), len + 1u);
    size_t out_ptr = 0u;
    for (size_t i = 0u; i < len; i++) {
        /* if backspace then delete a character */
        if (s[i] == '#') {
            if (out_ptr) {
                out[--out_ptr] = '\0';
            }
        } else {
            out[out_ptr++] = s[i];
        }
    }

    /* end string */
    out_ptr = '\0';

    return (const char*)out;
}

bool backspaceCompare(char* s, char* t) {
    const char* os1 = parse(s);
    const char* os2 = parse(t);

    return (strcmp(os1, os2) == 0u);
}