#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char charAt(const char* str, int index) {
    int length = strlen(str);
    
    if (index >= length || index < 0) {
        printf("No such index");
        exit(1);
    }

    return str[index];
}

int main() {
    const char* str = "Metallica";
    int index = 6;

    char result = charAt(str, index);
    printf("Character at index %d: %c\n", index, result);

    return 0;
}





