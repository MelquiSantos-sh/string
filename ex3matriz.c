#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Digite o numero de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o numero de colunas (n): ");
    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    // Leitura da matriz A
    printf("\nDigite os elementos da matriz A (%dx%d):\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    // Leitura da matriz B
    printf("\nDigite os elementos da matriz B (%dx%d):\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    // Calcula C = A + B
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];

    // Exibe matriz C
    printf("\nMatriz C = A + B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%6d", C[i][j]);
        printf("\n");
    }

    return 0;
}
