#include <stdio.h>

double salariofinal (double vendas, double salario);

int main(int argc, char const *argv[])
{
    char nome[50];
    double salariofixo, totalvendas, salariototal;

    scanf("%s", nome);
    scanf("%lf",&salariofixo);
    scanf("%lf",&totalvendas);

    salariototal = salariofinal(totalvendas, salariofixo);

    printf("TOTAL = R$ %.2lf\n",salariototal);

    return 0;
}


double salariofinal (double vendas, double salario){
    double result, comissao;
    comissao = 15.0/100;
    result = (vendas * comissao) + salario;
    return result;

}


// int main()
// {
//     char nome [50];
//     double salariofixo, totalvendas, salariofinal;

//     scanf("%s", nome);
//     scanf("%lf",&salariofixo);
//     scanf("%lf",&totalvendas);

//     salariofinal = (totalvendas * 0.15) + salariofixo;

//     printf("TOTAL = R$ %.2lf\n",salariofinal);
//     return 0;
// }
