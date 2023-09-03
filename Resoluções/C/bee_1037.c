#include <stdio.h>

void intervalo(double valor);

int main(int argc, char const *argv[])
{
    double valor;

    scanf("%lf",&valor);

    intervalo(valor);


    return 0;
}


void intervalo(double valor){
    if (valor >= 0 && valor <= 25.00)
    {
        printf("Intervalo [0,25]\n");
    } 
    else{
        if (valor > 25.00 && valor <= 50.00)
        {
           printf("Intervalo (25,50]\n");
        }
        else{
            if (valor > 50.00 && valor <= 75.00)
            {
               printf("Intervalo (50,75]\n");
            }
            else
            {
                if (valor > 75.00 && valor <= 100)
                {
                     printf("Intervalo (75,100]\n");
                }
                else
                {
                    printf("Fora de intervalo\n");
                }
                
                
            }
            
            
        }
        
    }
    
    
}