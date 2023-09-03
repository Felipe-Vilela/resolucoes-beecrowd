#include <stdio.h>

int formuladivisao(int valor1, int valor2);
int formularesto(int valor1, int valor2);

int main(int argc, char const *argv[])
{
    int idadeemdias, ano, meses, dias,diasano, diasmeses;

    scanf("%d", &idadeemdias);

    diasano = 365;
    diasmeses = 30;

    ano = formuladivisao(idadeemdias,diasano);
    idadeemdias = formularesto(idadeemdias, diasano);
    meses = formuladivisao(idadeemdias, diasmeses);
    dias = formularesto(idadeemdias,diasmeses);

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}

int formuladivisao(int valor1, int valor2){
    int result;
    result = valor1 / valor2;
    return result;
}

int formularesto(int valor1, int valor2){
    int result;
    result = valor1 % valor2;
    return result;
}