#include <stdio.h>

double formmedia(double valor, int valor1);


int main(int argc, char const *argv[])
{
    double number, soma, media;
    int controle, positivos;

    controle = 1;
    positivos = 0;
    soma = 0;

    while (controle <= 6)
    {
        scanf("%lf",&number);

        if (number > 0)
        {
            soma = soma + number;
            positivos++;
        }
      
        controle++;
    }

    media = formmedia(soma,positivos);

    printf("%d valores positivos\n",positivos);
    printf("%.1lf\n",media);
    
    return 0;
}


double formmedia(double valor, int valor1){
    return valor / valor1;
}
