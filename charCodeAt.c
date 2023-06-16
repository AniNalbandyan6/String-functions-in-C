#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int charCodeAt(const char* str, int index) {
    int length = strlen(str);
    if (index >= length || index < 0) {
        printf("No such index");
        exit(1);
    }
    return (int) str[index];
}

int main() {
    const char* str = "Nirvana";
    int index = 1;
    int result = charCodeAt(str, index);
    printf("Result %d: %d\n", index, result);
    return 0;
}
