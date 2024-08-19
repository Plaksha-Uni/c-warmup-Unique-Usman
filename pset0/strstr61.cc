#include <cstring>
#include <cassert>
#include <cstdio>

char* mystrstr(const char* s1, const char* s2) {
    if (*s2 == '\0') {
        return (char*)s1;
    }

    for (; *s1 != '\0'; s1++) {
        const char* h = s1;
        const char* n = s2;
        while (*h == *n && *n != '\0') {
            h++;
            n++;
        }
        if (*n == '\0') {
            return (char*)s1;
        }
    }
    return nullptr;
}

int main(int argc, char* argv[]) {
    assert(argc == 3);
    printf("strstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], strstr(argv[1], argv[2]));
    printf("mystrstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], mystrstr(argv[1], argv[2]));
    assert(strstr(argv[1], argv[2]) == mystrstr(argv[1], argv[2]));
}
