#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 4

int main()
{
    int **mat;
    int i, j;

    // aloca um vetor de LIN ponteiros para linhas
    mat = malloc(LIN * sizeof(int *));

    // aloca cada uma das linhas (vetores de COL inteiros)
    for (i = 0; i < LIN; i++)
    {
        mat[i] = malloc(COL * sizeof(int));
    }
    // percorre a matriz
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            mat[i][j] = 1; // acesso com sintaxe mais simples
            printf("%d", mat[i][j]);
            if (j == 3)
            {
                printf("\n");
            }
        }
    }
}