#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trimStart(char* str) {
    int length = strlen(str);
    int i, j;

    for (i = 0; i < length; i++) {
        if (str[i]!= ' ') {
            break;
        }
    }
    for (j = 0; j < length - i; j++) {
        str[j] = str[i + j];
    }
    str[j] = '\0';
}
int main() {
    char str[] = "     The Beatles";
    trimStart(str);
    printf("%s\n", str); 

    return 0;
}
