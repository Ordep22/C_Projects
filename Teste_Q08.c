#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n, *numeros;

    printf("Entre com o tamanho do vetor:");
    scanf("%d", &n);

    numeros = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {

        printf("vet[%d]:", i);
        scanf("%d", &numeros[i]);
    }

    printf("O vetor na ordem inverça é:\n");
    for (i = n-1; i >= 0; i--)
    {

        printf("%d ", numeros[i]);
    }


}