#include <stdio.h>
#include <ctype.h>
 
int main() {
    char str[200];
    int i;
 
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
 
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
 
    printf("String em maiusculas: %s", str);
 
    return 0;
}
 
