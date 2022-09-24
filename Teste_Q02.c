#include <stdio.h>
#include <string.h>

void f1(char *txt)
{

    while (*txt)
    {

        if (*txt == " ")
        {

            *txt = "-";
        }
        printf("%s\n", *txt);

        txt++;
    }
}

int main()
{

    char str[4];

    str[4] = "ancd";

    f1(&str[4]);
}