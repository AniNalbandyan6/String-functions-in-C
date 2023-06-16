#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trimEnd(char* str) {
    int length = strlen(str);
    int i = length - 1;

    while (i >= 0 && str[i]==' ') {
        str[i] = '\0';
        i--;
    }
}
int main() {
    char str[] = "The Beatles   ";
    trimEnd(str);
    printf("%s\n", str);  

    return 0;
}
