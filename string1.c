#include <stdio.h>
#include <string.h>
 
int main() {
    char string1[100] = "lua";
    char string2[100] = "cheia";
 
    printf("Antes de concatenar:\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);
 
    strcat(string1, string2);
 
    printf("\nApos concatenar:\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);
 
    return 0;
}
