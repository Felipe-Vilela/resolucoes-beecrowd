#include <stdio.h>

int main(int argc, char const *argv[])
{
    double number;
    int controle, qtdpositivo;

    controle = 1;

    while (controle <= 6)
    {
        scanf("%lf",&number);
        
        if (number > 0)
        {
            qtdpositivo++;
        }
       
        controle++;
    }

    printf("%d valores positivos\n",qtdpositivo);
    
    return 0;
}
