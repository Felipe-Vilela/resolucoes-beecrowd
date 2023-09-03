#include <stdio.h>

float mediaautomovel(int percursototal, float qtdcombustivel);

int main(int argc, char const *argv[])
{
    int distancia;
    float combustivelgasto, consumomedio;

    scanf("%d", &distancia);
    scanf("%f", &combustivelgasto);

    consumomedio = mediaautomovel(distancia,combustivelgasto);

    printf("%.3f km/l\n", consumomedio);

    return 0;
}


float mediaautomovel(int percursototal, float qtdcombustivel){
    float media;
    media = percursototal / qtdcombustivel;
    return media;
}