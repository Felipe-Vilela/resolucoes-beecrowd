#include <stdio.h>

int formula(int dinheiro, int nota01);
int restante(int restant, int qtdnota, int nota1);

int main(int argc, char const *argv[])
{
    int valor , n100, n50, n20, n10, n5, n2, n1,qtdnotas, resto ;

    scanf("%d", &valor);

    printf("%d\n", valor);

    n100 = 100;
    n50 = 50;
    n20 = 20;
    n10 = 10;
    n5 = 5;
    n2 = 2;
    n1 = 1;

    //Notas de 100
    qtdnotas = formula(valor,n100);
    resto = restante(valor,qtdnotas,n100);
    
    printf("%d nota(s) de R$ 100,00\n", qtdnotas, resto);

    //Notas de 50
    qtdnotas = formula(resto, n50 );
    resto = restante(resto,qtdnotas,n50);
    printf("%d nota(s) de R$ 50,00\n", qtdnotas);
  
    
    //Notas de 20
    qtdnotas = formula(resto, n20 );
    resto = restante(resto,qtdnotas,n20);
    printf("%d nota(s) de R$ 20,00\n", qtdnotas);

    //Notas de 10
    qtdnotas = formula(resto, n10 );
    resto = restante(resto,qtdnotas,n10);
    printf("%d nota(s) de R$ 10,00\n", qtdnotas);

    //Notas de 5
    qtdnotas = formula(resto, n5 );
    resto = restante(resto,qtdnotas,n5);
    printf("%d nota(s) de R$ 5,00\n", qtdnotas);

    //Notas de 2
    qtdnotas = formula(resto, n2);
    resto = restante(resto,qtdnotas,n2);
    printf("%d nota(s) de R$ 2,00\n", qtdnotas);

    //Notas de 1
    qtdnotas = formula(resto, n1);
    printf("%d nota(s) de R$ 1,00\n", qtdnotas);

    return 0;
}

int formula(int dinheiro, int nota01){
    int notas;
    notas = dinheiro / nota01;
    return notas;
}

int restante(int restant, int qtdnota, int nota1){
    int sobra;
    sobra = restant - qtdnota * nota1;
    return sobra;
}