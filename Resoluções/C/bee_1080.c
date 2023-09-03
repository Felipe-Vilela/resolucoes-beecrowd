#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, numbermaior, cont, i, contmaior;
    
    i = 1;
    cont = 0;

    scanf("%d",&numbermaior);
    i++;
    cont++;

    do {   i++;
        scanf("%d",&number);
        cont++;
        if (number > numbermaior){
            numbermaior = number;
            contmaior = cont;
        }  
    } while (i <= 100);
    
    printf("%d\n%d\n", numbermaior,contmaior);
    return 0;
}
