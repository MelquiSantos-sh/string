#include <stdio.h>

int main() {
    int mat[8][8];
    int i, j;
    int maior, menor;
    int linMaior, colMaior, linMenor, colMenor;

    // Leitura da matriz
    printf("Digite os elementos da matriz 8x8:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Inicializa maior e menor com o primeiro elemento
    maior = mat[0][0];
    menor = mat[0][0];
    linMaior = colMaior = 0;
    linMenor = colMenor = 0;

    // Busca maior e menor
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                linMaior = i;
                colMaior = j;
            }
            if (mat[i][j] < menor) {
                menor = mat[i][j];
                linMenor = i;
                colMenor = j;
            }
        }
    }

    printf("\nMaior elemento: %d  (posicao: linha %d, coluna %d)\n", maior, linMaior, colMaior);
    printf("Menor elemento: %d  (posicao: linha %d, coluna %d)\n", menor, linMenor, colMenor);

    return 0;
}
