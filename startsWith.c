#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int startsWith(const char* str, const char* start) {
    int strLength = strlen(str);
    int startLength = strlen(start);

    if (startLength > strLength) {
        return 0; 
    }
    return strncmp(str, start, startLength) == 0;
}
int main() {
    char str[] = "Linkin park";
    char prefix1[] = "Linkin";
    char prefix2[] = "Banana";
    printf("%d\n", startsWith(str, prefix1)); 
    printf("%d\n", startsWith(str, prefix2));  

    return 0;
}

