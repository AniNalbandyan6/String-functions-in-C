#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indexOf(const char* str, const char* sub) {
    char* result = strstr(str, sub);
    if (result != NULL) {
        return result - str;
    }
    return -1;
}

int main() {
    const char* str = "cherry, banana";
    const char* sub = "cherry";

    int index = indexOf(str, sub);
    printf("Index: %d\n", index);

    return 0;
}
