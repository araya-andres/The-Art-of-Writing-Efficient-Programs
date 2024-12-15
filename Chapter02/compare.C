// 03 using int instead of unsigned int in compare()
bool compare(const char* s1, const char* s2) {
    if (s1 == s2) return false;
    while (*s1 && *s1 == *s2) s1++, s2++;
    return *s1 > *s2;
}

