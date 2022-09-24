#include <stdio.h>
#include <math.h>
#include <string.h>

/*
//Questão 04
typedef struct TypeMyStruct

{
    int a;
    int b;

} TypeMyStruct;

int SAP(int x, int y)
{

    return (x + y);
}

int main(void)
{

    TypeMyStruct mySt;

    mySt.a = 6;
    mySt.b = 2;

    int a_plus_b = SAP(mySt.a, mySt.b);

    printf("a = %d,b = %d,a + b = %d", mySt.a, mySt.b, a_plus_b);

    return 0;
}

*/

#define MAX_STX 8

typedef struct
{
    double b[MAX_STX];
    double acc;
    int b_index;

} tStX;

static double CalcTx(tStX *st, int input)
{

    // Aqui estou recebendo o x[0] = 25
    st->acc += input;
    printf("%d\n", st->acc);
    // Aqui estou recebendo por decremento o valor de b_index
    st->acc -= st->b[st->b_index];

    st->b[st->b_index++] = input;

    printf("%d\n", st->b_index);

    if (st->b_index >= MAX_STX)
    {

        st->b_index = 0;
    }
    printf("\n");
    printf("%f\n", st->acc);
    printf("%d\n", MAX_STX);
    printf("\n");

    return (st->acc / MAX_STX);
}

#define N 16
int x[N] = {25, 35, 40, 20, 50, 10, 60, 0, 20, 20, 20, 20, 20, 20, 20, 20};

int main()
{

    tStX st;

    memset(&st, 0, sizeof(tStX));

    for (int i = 0; i < N; i++)
    {

        printf("Iter %d: %f\r\n", i + 1, CalcTx(&st, x[i]));
    }
}