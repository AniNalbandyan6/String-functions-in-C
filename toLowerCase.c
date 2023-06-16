#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLowerCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}
int main() {
    char str[] = "Rolling Stones";
    toLowerCase(str);
    printf("%s\n", str); 

    return 0;
}
