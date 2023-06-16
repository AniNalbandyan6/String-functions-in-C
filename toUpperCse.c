#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpperCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
}

int main() {
    char str[] = "rolling stones";
    toUpperCase(str);
    printf("%s\n", str);  

    return 0;
}
