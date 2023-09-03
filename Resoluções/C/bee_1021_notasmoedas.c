#include <stdio.h>

float formula(float dinheiro, float nota01);
double restante(double restant, double qtdnota, double nota1);


int main(int argc, char const *argv[])
{
    int  qtdnotas, qtdmoedas ;
    double valor, resto , n100, n50, n20, n10, n5, n2, m1,centavos50, centavos25, centavos10, centavos5, centavos1;

    scanf("%lf", &valor);

    printf("NOTAS:\n");

    //Notas de 100
    n100 = 100.00;
    qtdnotas = formula(valor,n100);
    resto = restante(valor,qtdnotas,n100);
    
    printf("%d nota(s) de R$ 100.00\n", qtdnotas);

    //Notas de 50
    n50 = 50.00;
    qtdnotas = formula(resto, n50 );
    resto = restante(resto,qtdnotas,n50);
    printf("%d nota(s) de R$ 50.00\n", qtdnotas);
  
    
    //Notas de 20
    n20 = 20.00;
    qtdnotas = formula(resto, n20 );
    resto = restante(resto,qtdnotas,n20);
    printf("%d nota(s) de R$ 20.00\n", qtdnotas);

    //Notas de 10
    n10 = 10.00;
    qtdnotas = formula(resto, n10 );
    resto = restante(resto,qtdnotas,n10);
    printf("%d nota(s) de R$ 10.00\n", qtdnotas);

    //Notas de 5
    n5 = 5.00;
    qtdnotas = formula(resto, n5 );
    resto = restante(resto,qtdnotas,n5);
    printf("%d nota(s) de R$ 5.00\n", qtdnotas);

    //Notas de 2
    n2 = 2.00;
    qtdnotas = formula(resto, n2);
    resto = restante(resto,qtdnotas,n2);
    printf("%d nota(s) de R$ 2.00\n", qtdnotas);

    printf("MOEDAS:\n");

    
    //Moedas de 1
    m1 = 1.00;
    qtdmoedas= formula(resto, m1);
    resto = restante(resto,qtdmoedas,m1);
    printf("%d moeda(s) de R$ 1.00\n", qtdmoedas);

  
    //Moedas de 50 centavos
    centavos50 = 0.50;
    qtdmoedas = formula(resto, centavos50);
    resto = restante(resto,qtdmoedas,centavos50);
    printf("%d moeda(s) de R$ 0.50\n", qtdmoedas);

    //Moedas de 25 centavos
    centavos25 = 0.25;
    qtdmoedas = formula(resto, centavos25);
    resto = restante(resto,qtdmoedas,centavos25);
    printf("%d moeda(s) de R$ 0.25\n", qtdmoedas);

    //Moedas de 10 centavos
    centavos10 = 0.10;
    qtdmoedas = formula(resto, centavos10);
    resto = restante(resto,qtdmoedas,centavos10);
    printf("%d moeda(s) de R$ 0.10\n", qtdmoedas);

    //Moedas de 5 centavos
    centavos5 = 0.05;
    qtdmoedas = formula(resto, centavos5);
    resto = restante(resto,qtdmoedas,centavos5);
    printf("%d moeda(s) de R$ 0.05\n", qtdmoedas);

    //Moedas de 1 centavos
    centavos1 = 0.01;
    qtdmoedas= formula(resto, centavos1);
    printf("%d moeda(s) de R$ 0.01\n", qtdmoedas);


    return 0;
}

float formula(float dinheiro, float nota01){
    float notas;
    notas = dinheiro / nota01;
    return notas;
}

double restante(double restant, double qtdnota, double nota1){
    double sobra;
    sobra = restant - qtdnota * nota1;
    return sobra;
}

