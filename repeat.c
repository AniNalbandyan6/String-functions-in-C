#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void repeat(char* str, int amount) {
    int length = strlen(str);
    int i;
    for (i = 0; i < amount; i++) {
        printf("%s", str);
    }
}

int main() {
    char str[] = "Aerosmith";
    repeat(str, 3);  
    return 0;
}
