#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void padEnd(char* str, int full, char padChar) {
    int currentLength = strlen(str);
    if (currentLength >= full) {
        return; 
    }
    int needToPad = full - currentLength;
    int i;
    for (i = 0; i < needToPad; i++) {
        str[currentLength + i] = padChar;
    }
    str[currentLength + i] = '\0';  
}

int main() {
    char str[20] = "Nickelback";
    padEnd(str, 20, '.');
    printf("%s\n", str); 
    return 0;
}
