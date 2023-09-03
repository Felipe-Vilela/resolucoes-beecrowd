#include <stdio.h>

int main()
{
    int codigo1, qtdade1,codigo2, qtdade2;
    double valorunitario1, valorunitario2, totalpagar;

    scanf("%d %d %lf",&codigo1,&qtdade1,&valorunitario1);
    scanf("%d %d %lf",&codigo2,&qtdade2,&valorunitario2);

    totalpagar = (qtdade1 * valorunitario1) + (qtdade2 * valorunitario2);

    printf("VALOR A PAGAR: R$ %.2lf\n", totalpagar);

    return 0;
}
