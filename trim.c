#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim(char* str) {
    int length = strlen(str);
    int i, j;

    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            break;
        }
    }

    for (j = 0; j < length - i; j++) {
        str[j] = str[i + j];
    }
    length = j;
    while (length > 0 && (str[length - 1] == ' ')) {
        str[length - 1] = '\0';
        length--;
    }
}

int main() {
    char str[] = "     The Beatles    ";
    trim(str);
    printf("%s\n", str);  

    return 0;
}
