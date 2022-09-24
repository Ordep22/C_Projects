#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Aula 12: Entrada de Dados:");

    /* Informando um unico dado de saída:

     - scanf(%tipo_de_saida, valor_da_variavel);

    Informando mais de um dado de saída:

     - scanf("%tipo_de_saida_00 %tipo_de_saida_00", valor_da_variavel_00,valor_da_variavel_01);
    */

    // Imprimindo um valor inteiro %i ou %d;
    // float/ duble %f
    // char %c
    // string %s
    // %u módulo de um número
    // %p endereço de memória 
    // %e ou %E para imprimir número com notação ciêntífica 
    // %% para imprimir somente um sinal de porcentagem

    int num1, num2;

    printf("\n");
    printf("Digite um número inteiro:");
    scanf("%d",&num1);
    printf("O primeiro número interio digitado foi:%d",num1);

    printf("\n");
    printf("Digite um número inteiro:");
    scanf("%d",&num2);
    printf("O segundo número interio digitado foi:%d",num2);
    printf("\n");
    













    return 0;







}