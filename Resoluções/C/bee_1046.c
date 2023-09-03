#include <stdio.h>

int tempo(int valor1, int valor2);

int main(int argc, char const *argv[])
{
    int inicio, fim, horas;

    scanf("%d %d", &inicio, &fim);

    horas = tempo(inicio,fim);

    printf("O JOGO DUROU %d HORA(S)\n", horas);


    return 0;
}


int tempo(int valor1, int valor2){

    int dia;
    dia = 24;
    if (valor1 >= 12)
    {
        return dia - valor1 + valor2 ;
    }else{
        if (valor1 == valor2){
            return 24;
        }else
        {
            return dia - valor1 + valor2 - dia; 
        } 
    }
}