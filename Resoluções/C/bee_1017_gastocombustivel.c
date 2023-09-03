#include <stdio.h>

float qtdadelitros(float mediaveiculo, int horasviagem, int velocidademedia);

int main(int argc, char const *argv[])
{
    int tempogasto, velocidade;
    float autonomiacarro, qtdlitros;

    autonomiacarro = 12.0;

    scanf("%d", &tempogasto);
    scanf("%d", &velocidade);

    qtdlitros = qtdadelitros(autonomiacarro, tempogasto, velocidade);

    printf("%.3f\n", qtdlitros);

    return 0;
}

float qtdadelitros(float mediaveiculo, int horasviagem, int velocidademedia){
    float litrosnecessarios;
    litrosnecessarios = (horasviagem * velocidademedia) / mediaveiculo;
    return litrosnecessarios;
}