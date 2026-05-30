#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Digite o numero de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o numero de colunas (n): ");
    scanf("%d", &n);

    int A[m][n], T[n][m];

    // Leitura da matriz A
    printf("\nDigite os elementos da matriz A (%dx%d):\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    // Calcula transposta: T[j][i] = A[i][j]
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            T[j][i] = A[i][j];

    // Exibe matriz original
    printf("\nMatriz A (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%6d", A[i][j]);
        printf("\n");
    }

    // Exibe matriz transposta
    printf("\nMatriz Transposta T (%dx%d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%6d", T[i][j]);
        printf("\n");
    }

    return 0;
}
