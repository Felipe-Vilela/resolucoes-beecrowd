#include <stdio.h>

int somapesos (int x, int y, int z);
double formula (double n1, double n2, double n3, int x,int y, int z);


int main(int argc, char const *argv[])
{
    int peso1, peso2, peso3 ;
    double nota1, nota2, nota3, resultado;

    scanf("%lf",&nota1);
    scanf("%lf",&nota2);
    scanf("%lf",&nota3);

    peso1 = 2;
    peso2 = 3;
    peso3 = 5;
    
    resultado = formula(nota1,nota2,nota3,peso1,peso2,peso3) ;

    printf("MEDIA = %.1lf\n", resultado);
    return 0;
}

int somapesos (int x, int y, int z){
    int result;
    result = (x + y + z);
    return result;

}

double formula (double n1, double n2, double n3, int x,int y, int z ){
    double media;
    media = (n1 * x + n2 * y + n3 * z) / somapesos(x,y,z);
    return media;

}
