#include <stdio.h>

int main(int argc, char const *argv[])
{
    int horas, velocidade, distancia;
    double qtdadelitros;

    scanf("%d",&horas);
    scanf("%d",&velocidade);

    distancia = horas * velocidade;
    qtdadelitros = distancia / 12.0;

    printf("%.3lf\n", qtdadelitros);


    return 0;
}
