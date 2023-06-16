#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void padStart(char* str, int full, char padChar) {
    int currentLength = strlen(str);
    if (currentLength >= full) {
        return; 
    }
    int neetToPad = full - currentLength;
    int i;
    for (i = full - 1; i >= neetToPad; i--) {
        str[i] = str[i - neetToPad];
    }
    for (i = 0; i < neetToPad; i++) {
        str[i] = padChar;
    }
}
int main() {
    char str[20] = "Radiohead";
    padStart(str, 20, '.');
    printf("%s\n", str);  

    return 0;
}
