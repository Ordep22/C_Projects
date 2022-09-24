#include <stdio.h>
int main(){

    //Na Linguagem C não é possível modificar o tipo de variável que é delcarado
    // por exemplo, se iniciarmos o programa declarando a variável como inteira ela
    // será inteira por toda a estrutura

    int i = 100,j = 0,k = 0;
    float x = 0,y = 0,z = 0;
    char a = '1',b = '2',c;


    c = a + b;

    printf("\n");
    printf("O valor de i é:");
    printf("%d",i);
    printf("\n");

    printf("\n");
    printf("O valor da soma de a + b é: ");
    printf("%d",c);
    printf("\n");




    return 0;



}