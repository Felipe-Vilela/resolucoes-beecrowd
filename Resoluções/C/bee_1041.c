#include <stdio.h>

void quadrantes(double x, double y);

int main(int argc, char const *argv[])
{
    double valor1, valor2;
    scanf("%lf %lf", &valor1,&valor2);

    quadrantes(valor1, valor2);


    return 0;
}

void quadrantes(double x, double y){

    if (x > 0 && y > 0){
        printf("Q1\n");
    }else{
        if (x < 0 && y > 0){
            printf("Q2\n");
        }else{
            if (x < 0 && y < 0){
                printf("Q3\n");
            }else{
                if (x > 0 && y < 0){
                     printf("Q4\n");
                }else{
                    if (x == 0 && y == 0){
                         printf("Origem\n"); 
                    }else{
                        if (x == 0 && y > 0 || y < 0)
                        {
                            printf("Eixo Y\n");
                        }else
                        {
                            printf("Eixo X\n");
                        }
                        
                        
                    }
                    
                    
                   
                }  
            }  
        }       
    }
}