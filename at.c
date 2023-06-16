#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char at(char* str, int index) {
    int length = strlen(str);
    
    if (index >= 0) {
        if (index >= length) {
            printf("Invalid index\n");
            exit(1);
        }
        return str[index];
    } else {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str[index];
    }
}

int main() {
    const char* str = "Metallica";
    int index = 5;
    int length = strlen(str);
    char* array = (char*) malloc((length + 1) * sizeof(char));
    strcpy(array, str);

    char result = at(array, index);
    printf("Result %d: %c\n", index, result);
    free(array);

    return 0;
}
