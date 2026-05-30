#include <stdio.h>
#include <string.h>
 
int main() {
    char str[200];
    int i, tamanho;
 
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
 
    // Remove o '\n' do fgets se existir
    tamanho = strlen(str);
    if (str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0';
        tamanho--;
    }
 
    printf("String invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
 
    return 0;
}
 
