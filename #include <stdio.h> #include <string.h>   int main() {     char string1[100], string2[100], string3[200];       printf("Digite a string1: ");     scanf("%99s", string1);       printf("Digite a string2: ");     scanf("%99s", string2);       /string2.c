#include <stdio.h>
#include <string.h>
 
int main() {
    char string1[100], string2[100], string3[200];
 
    printf("Digite a string1: ");
    scanf("%99s", string1);
 
    printf("Digite a string2: ");
    scanf("%99s", string2);
 
    // Monta string3 = string1 + " " + string2
    strcpy(string3, string1);
    strcat(string3, " ");
    strcat(string3, string2);
 
    printf("\nApos concatenar:\n");
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);
    printf("string3: %s\n", string3);
 
    printf("\nTamanhos: %zu %zu %zu\n",
           strlen(string1), strlen(string2), strlen(string3));
 
    return 0;
}
