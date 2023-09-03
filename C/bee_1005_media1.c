#include <stdio.h>

double formula (double x, double y);

int main()
{
    double valor1, valor2, resultado ;

    scanf("%lf",&valor1);
    scanf("%lf",&valor2);
    
    resultado = formula(valor1, valor2);

     printf("MEDIA = %.5lf\n", resultado);

    return 0;
}

double formula (double x, double y){
    double media;
    media = (x * 3.5 + y * 7.5) / (3.5 + 7.5);
    return media;
}