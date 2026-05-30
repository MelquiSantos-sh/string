#include <stdio.h>
 
int main() {
    char str[200];
    char c;
    int i, contador = 0;
 
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
 
    printf("Digite o caractere a contar: ");
    scanf(" %c", &c);
 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            contador++;
    }
 
    printf("Quantidade de '%c': %d\n", c, contador);
 
    return 0;
}
 
