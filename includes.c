#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool includes(const char* str, const char* substring) {
    return strstr(str, substring) != NULL;
}

int main() {
    const char* str = "Nothing else";
    const char* substring = "else";

    bool hasSubstring = includes(str, substring);
    printf("Result%s\n", hasSubstring ? "true" : "false");

    return 0;
}

