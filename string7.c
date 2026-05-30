#include <stdio.h>
#include <string.h>
 
int main() {
    char string1[100], string2[100];
 
    printf("Digite a string1: ");
    fgets(string1, sizeof(string1), stdin);
 
    printf("Digite a string2: ");
    fgets(string2, sizeof(string2), stdin);
 
    // Remove '\n' do fgets se existir
    int t1 = strlen(string1);
    int t2 = strlen(string2);
    if (string1[t1 - 1] == '\n') string1[t1 - 1] = '\0';
    if (string2[t2 - 1] == '\n') string2[t2 - 1] = '\0';
 
    if (strcmp(string1, string2) == 0)
        printf("As strings sao iguais\n");
    else
        printf("As strings sao diferentes\n");
 
    return 0;
}
 
