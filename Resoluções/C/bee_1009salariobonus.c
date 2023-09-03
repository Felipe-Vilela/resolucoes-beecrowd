#include <stdio.h>

int main()
{
    char nome [50];
    double salariofixo, totalvendas, salariofinal;

    scanf("%s", nome);
    scanf("%lf",&salariofixo);
    scanf("%lf",&totalvendas);

    salariofinal = (totalvendas * 0.15) + salariofixo;

    printf("TOTAL = R$ %.2lf\n",salariofinal);
    return 0;
}
