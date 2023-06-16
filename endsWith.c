#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool endsWith(const char* str, const char* tail) {
    size_t strLength = strlen(str);
    size_t tailLength = strlen(tail);
    if (tailLength > strLength) {
        return false;
    }
    const char* strEnd = str + (strLength - tailLength);
    return strcmp(strEnd, tail) == 0;
}

int main() {
    const char* str = "Komitas avenue";
    const char* tail = "avenue";

    bool ends = endsWith(str, tail);
    printf("Result: %s\n", ends ? "true" : "false");

    return 0;
}