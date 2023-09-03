#include <stdio.h>

void tabuada(int numero);

int main(int argc, char const *argv[]){
    int n;

    scanf("%d",&n);

    tabuada(n);

    return 0;
}

void tabuada(int numero){
    int controle;

    for (controle = 1; controle != 11; controle++){
        printf("%d x %d = %d\n",controle,numero,controle*numero);
    }
}
