static void _swap(char* a, char* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void reverseString(char* s, int sSize) {
    for (int i = 0 ; i < sSize / 2 ; i++) {
        _swap(&s[i], &s[sSize - i - 1]);
    }
}