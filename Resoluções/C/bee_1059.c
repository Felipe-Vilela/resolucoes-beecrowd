#include <stdio.h>

eh_par(int numero);

int main(int argc, char const *argv[])
{
    int number, cont, result;

    number = 1;

    while (number <= 100)
    {
        // if (number % 2 == 0)
        // {
        //     printf("%d \n", number);
        // }
        eh_par(number);

        number++;
        
    }
    


    return 0;
}


eh_par(int numero){
     if (numero % 2 == 0)
        {
            printf("%d \n", numero);
        }
}