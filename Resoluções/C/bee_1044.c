#include <stdio.h>

int multiplos(int v1, int v2);
void impressoes(int valor);

int main(int argc, char const *argv[])
{
    int a, b, resultado;
    scanf("%d %d",&a,&b);

    resultado = multiplos(a,b);

    impressoes(resultado);

    return 0;
}

int multiplos(int v1, int v2){

    if (v2 % v1 == 0 || v1 % v2 ==0){
        return 1;
        
    }else{
        return 0;
    }  
}

void impressoes(int valor){
    if (valor == 1){
        printf("Sao Multiplos\n");
    }else{
         printf("Nao sao Multiplos\n");
    } 
}
