#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("-------------------------\n");
    printf("Ola Devs\n");
    printf("Aula 13: Calculadora\n");
    printf("Let`s Code\n");
    printf("-------------------------\n");


    int num1, num2, soma, subtracao, prod;
    float div;




    scanf("%i%i",&num1,&num2);

    printf("Número 1  = %i\n",num1);
    printf("Número 2  = %i\n",num2);

    
    //Soma
    soma = num1 + num2;

    printf("A soma é:%i\n",soma);

    //Subtração
    if (num1 >= num2){
        subtracao = num1 - num2;
        printf("A subtracao é:%i\n",subtracao);
    }

    else{

        subtracao = num2 - num1;
        printf("A subtracao é:%i\n",subtracao);
    }
    
    //Produto

    prod = num1 * num2;

    printf("O produto é:%i\n",prod);


    //Divisão


    if (num1 == 0  || num2 == 0){

        printf("É imposível realizar uma divisao por zero\n");

    }

    else{

        if (num1 >= num2){

            div = num1/num2;

            printf("O resultado da divisão é: %f\n",div);

        
        }
        
        if (num1 < num2){

            div  = num2/num1;
            printf("O resultado da divisão é: %f\n",div);

        }
        

    }




    return 0;











}