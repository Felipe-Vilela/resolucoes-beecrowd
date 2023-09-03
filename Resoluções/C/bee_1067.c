#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, controle;

    controle = 1;

    scanf("%d",&number);

    while (controle <= number)
    {
        if (controle % 2 != 0)
        {
            printf("%d\n",controle);
        }

        controle++;
        
    }
    return 0;
}
