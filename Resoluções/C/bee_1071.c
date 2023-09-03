#include <stdio.h>


int main(int argc, char const *argv[])
{
    int number1, number2, soma, controle, troca;

    scanf("%d",&number1);
    scanf("%d",&number2);

    if (number1 < number2)
    {
        troca = number1;
        number1 = number2;
        number2 = troca;
    }

    controle = number2 + 1;
    soma = 0;

    while (controle < number1)
    {
        if (controle % 2 != 0 )
        {
            soma = soma + controle;
        }

        controle++;   
    }
    
    printf("%d\n",soma);

    return 0;
}
