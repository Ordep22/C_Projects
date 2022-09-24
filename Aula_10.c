#include <stdio.h>

int main()
{

    printf("\n");
    printf("Aula 10: Valores Formatados");
    printf("\n");

    /*
    Na aula de hoje vamos aprender quais são os métodos de apresentar valores no terminal. Em C devemos informar
    comando printf qual o tipo de informação desejamos apresentar.

    Informando um unico dado de saída:

     - printf(%tipo_de_saida, valor_da_variavel);

    Informando mais de um dado de saída:

     - printf("%tipo_de_saida_00 %tipo_de_saida_00", valor_da_variavel_00,valor_da_variavel_01);
    */

    // Imprimindo um valor inteiro %i ou %d;
    // float/ duble %f
    // char %c
    // string %s
    // %u módulo de um número
    // %p endereço de memória 
    // %e ou %E para imprimir número com notação ciêntífica 
    // %% para imprimir somente um sinal de porcentagem


    int x = 1;

    printf("O valor de X é: %i", x);
    printf("\n");

    // Imprimindo um valor float

    float y = 9.57, z = 0;
    printf("\n");
    printf("Entre com um valor de ponto flutuante para Y:");
    scanf("%f",&y);
    printf("O valor de Y é: %f", y);
    printf("\n");

    z = y - x;
    printf("A subtração entre X e Y é:");
    printf("%d - %f = %f\n",x,y,z);

    return 0;

}