#include <stdio.h>
 
int main() {
    char str[200];
    int i, contador = 0;
 
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'o')
            contador++;
    }
 
    printf("Quantidade de 'o': %d\n", contador);
 
    return 0;
}
 
