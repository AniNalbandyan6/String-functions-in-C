#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lastIndexOf(const char* str, const char* sub) {
    int strLength = strlen(str);
    int subLength = strlen(sub);

    if (subLength > strLength) {
        return -1;
    }

    int i, j;
    for (i = strLength - subLength; i >= 0; i--) {
        for (j = 0; j < subLength; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == subLength) {
            return i;
        }
    }

    return -1;
}

int main() {
    const char* str = "Hello, World!";
    const char* str2 = "o";

    int index = lastIndexOf(str, str2);
    printf("Last occurrence index: %d\n", index);

    return 0;
}
