#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(const char* str1, const char* str2) {
    size_t l1 = strlen(str1);
    size_t l2 = strlen(str2);
    size_t length = l1 + l2;
    char* result = (char*) malloc((length + 1) * sizeof(char));

    size_t i;
    for (i = 0; i < l1; i++) {
        result[i] = str1[i];
    }
    size_t j;
    for (j = 0; j < l2; j++) {
        result[l1 + j] = str2[j];
    }

    result[length] = '\0';
    return result;
}

int main() {
    const char* str1 = "Led ";
    const char* str2 = "Zeppelin";

    char* concatenated= concat(str1, str2);
    printf("Concatenated string: %s\n", concatenated);

    free(concatenated);

    return 0;
}
