#include <stdio.h>

double media(double n1, double n2, double n3, int p1, int p2, int p3);

int somapesos(int p1, int p2, int p3);

int main(int argc, char const *argv[])
{
    int ncasos, i,peso1, peso2, peso3;;
    double nota1, nota2, nota3, resultado;

    i = 1;
    peso1 = 2.0 ;
    peso2 = 3.0 ;
    peso3 = 5.0 ;

    scanf("%d",&ncasos);

    do{
        scanf("%lf %lf %lf",&nota1,&nota2,&nota3);
        resultado = media(nota1,nota2,nota3,peso1,peso2,peso3);
        printf("%.1lf\n",resultado);
        i++;
    } while (i <= ncasos);
    
    return 0;
}

int somapesos(int p1, int p2, int p3){
    int result;
    result = p1 + p2 + p3;
    return result;
}

double media(double n1, double n2, double n3, int p1, int p2, int p3){
    double media;
    media = (2.0 * n1 + 3.0 * n2 + 5.0 * n3) / somapesos(p1,p2,p3);
    return media;
}


