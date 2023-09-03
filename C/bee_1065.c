#include <stdio.h>

int main(int argc, char const *argv[])
{
    int controle, number, qtdpar, soma;
   
    controle = 1;
    soma = 0;
    qtdpar = 0;

    while (controle <= 5)
    {
        scanf("%d",&number);

        if (number % 2 == 0){
            qtdpar++;
        }
        controle++;
    }
    
    printf("%d valores pares\n",qtdpar);
    return 0;
}
