#include <stdio.h>
#include <string.h>

/// Types: int, float, char, string

void somar(const void *arg1, const void *arg2, const char *type, void *result) {
    if(
        !strcmp(type, "%d") ||
        !strcmp(type, "%i") ||
        !strcmp(type, "%c")
    ) {
        *(int *)result = *(int *)arg1 + *(int *)arg2;   
    } else if(!strcmp(type, "%f")) {
        *(float *)result = *(float *)arg1 + *(float *)arg2;   
    } else if(!strcmp(type, "%s")) {
        strcat(strcat(result, arg1), arg2);
    } else {
        result = 0;
    }
}

int main() {
    
    const char *firstInput = "ba";
    const char *secondInput = "nana";
    char sum[sizeof(firstInput) + sizeof(secondInput) + sizeof('\0')] = {0};
    
    somar(firstInput, secondInput, "%s", sum);
    
    printf("Result: %s\n", sum);

    
    return 0;
}
