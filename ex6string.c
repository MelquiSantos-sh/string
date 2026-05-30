#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    float notas[n][4];
    float medias[n];
    float somaGeral = 0;

    // Leitura das notas
    for (i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("  Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calcula médias individuais
    for (i = 0; i < n; i++) {
        float soma = 0;
        for (j = 0; j < 4; j++)
            soma += notas[i][j];
        medias[i] = soma / 4.0;
        somaGeral += medias[i];
    }

    // Exibição da tabela
    printf("\n%-6s %-7s %-7s %-7s %-7s %-7s\n",
           "ALUNO", "NOTA1", "NOTA2", "NOTA3", "NOTA4", "MEDIA");

    for (i = 0; i < n; i++) {
        printf("%-6d ", i + 1);
        for (j = 0; j < 4; j++)
            printf("%-7.1f ", notas[i][j]);
        printf("%-7.1f\n", medias[i]);
    }

    printf("\nMEDIA GERAL.......................: %.1f\n", somaGeral / n);

    return 0;
}
