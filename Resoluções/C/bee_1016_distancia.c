#include<stdio.h>

int tempogasto(int kmnafrente);

int main(int argc, char const *argv[])
{
    int distanciakm, tempominutos;

    scanf("%d", &distanciakm);

    tempominutos = tempogasto(distanciakm);

    printf("%d minutos\n", tempominutos);
    
    return 0;
}

int tempogasto(int kmnafrente){
    int tempo;
    tempo = kmnafrente * 2;
    return tempo;
    
}