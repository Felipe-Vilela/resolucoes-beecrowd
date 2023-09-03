#include <stdio.h>

void imposto(double valor);

int main(int argc, char const *argv[])
{
    double salario, pagar;

    scanf("%lf",&salario);

    imposto(salario);

   
}

void imposto(double valor){

    double imposto1m, imposto2m,imposto3m, result;

    if (valor > 0.0 && valor <= 2000.00 )
    {
       printf("Isento\n");
    }
    else{
        if (valor > 2000.00 && valor <= 3000.00){
           
            imposto1m = (valor - 2000 ) * 0.08 ;
            printf("R$ %.2lf\n",imposto1m);

        }else{
            if (valor > 3000.00 && valor <= 4500.00){
                imposto1m = 1000 * 0.08;
                imposto2m = (valor - 3000) * 0.18;
                result = imposto1m + imposto2m;
                printf("R$ %.2lf\n",result);
            }else
            {
                imposto1m = 1000 * 0.08;
                imposto2m = 1500 * 0.18;
                imposto3m = (valor - 4500) * 0.28;
                result = imposto1m + imposto2m + imposto3m;
                printf("R$ %.2lf\n",result);

            }           
        }              
    }
}