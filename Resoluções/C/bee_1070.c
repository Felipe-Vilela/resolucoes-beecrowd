#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, controle;

    controle = 1;

    scanf("%d",&number);

    while (controle <= 6 )
    {
        if (number % 2 != 0)
        {
            printf("%d\n",number);
            controle++;
        }

        number++;
        
    }
    

    return 0;
}
