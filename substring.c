#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring(const char* str, int startInd, int length, char* result) {
    strncpy(result, str + startInd, length);
    result[length] = '\0';  
}

int main() {
    char str[] = "Evanescence";
    char result[50];
    substring(str, 2, 3, result);
    printf("%s\n", result);  

    return 0;
}
