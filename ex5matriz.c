#include <stdio.h>

#define N 5

void lerMatriz(int mat[N][N]) {
    int i, j;
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
}

void exibirMatriz(int mat[N][N]) {
    int i, j;
    printf("\nMatriz 5x5:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%6d", mat[i][j]);
        printf("\n");
    }
}

void quartaLinhaEPrimeiraColuna(int mat[N][N]) {
    int i, j;
    printf("\nElementos da quarta linha (linha 3):\n");
    for (j = 0; j < N; j++)
        printf("%6d", mat[3][j]);

    printf("\n\nElementos da primeira coluna (coluna 0):\n");
    for (i = 0; i < N; i++)
        printf("%6d\n", mat[i][0]);
}

void somaDiagonalPrincipal(int mat[N][N]) {
    int i, soma = 0;
    for (i = 0; i < N; i++)
        soma += mat[i][i];
    printf("\nSoma da diagonal principal: %d\n", soma);
}

void zeroNegativos(int mat[N][N]) {
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (i != j && mat[i][j] < 0)
                mat[i][j] = 0;
    printf("\nValores negativos fora da diagonal substituidos por 0.\n");
    exibirMatriz(mat);
}

void buscarElemento(int mat[N][N]) {
    int i, j, x, encontrado = 0;
    printf("\nDigite o valor a buscar: ");
    scanf("%d", &x);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (mat[i][j] == x) {
                printf("Elemento %d encontrado na linha %d, coluna %d\n", x, i, j);
                encontrado = 1;
            }
    if (!encontrado)
        printf("Elemento %d nao encontrado na matriz.\n", x);
}

int main() {
    int mat[N][N];
    int opcao;

    lerMatriz(mat);

    do {
        printf("\n===== MENU =====\n");
        printf("(a) Mostrar todos os elementos\n");
        printf("(b) Mostrar quarta linha e primeira coluna\n");
        printf("(c) Soma da diagonal principal\n");
        printf("(d) Zerar negativos fora da diagonal principal\n");
        printf("(e) Buscar elemento\n");
        printf("(0) Sair\n");
        printf("Opcao: ");
        scanf(" %c", (char *)&opcao);  // lê como char via int

        char op = (char)opcao;

        switch (op) {
            case 'a': exibirMatriz(mat); break;
            case 'b': quartaLinhaEPrimeiraColuna(mat); break;
            case 'c': somaDiagonalPrincipal(mat); break;
            case 'd': zeroNegativos(mat); break;
            case 'e': buscarElemento(mat); break;
            case '0': printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while ((char)opcao != '0');

    return 0;
}
