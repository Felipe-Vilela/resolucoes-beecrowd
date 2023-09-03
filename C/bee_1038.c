#include <stdio.h>

double codigos(char cod, int qtd);

int main(int argc, char const *argv[])
{
    char codigo;
    int qtdade;
    double totalpagar;

    scanf("%c",&codigo);
    scanf("%d",& qtdade);

    totalpagar = codigos(codigo,qtdade);

    printf("Total: R$ %.2lf\n", totalpagar);



    return 0;
}

double codigos(char cod, int qtd){

    double resultado;

    switch (cod)
    {
    case '1':
        resultado = 4.00 * qtd ;
        
        break;
     case '2':
        resultado = 4.50 * qtd;
        break;
    case '3':
        resultado = 5.00 * qtd;
        break;
    case '4':
        resultado = 2.00 * qtd;
        break;
    case '5':
        resultado = 1.50 * qtd;
        break;

    default:
        break;
    }

    return resultado;
}