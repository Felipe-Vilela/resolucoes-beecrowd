#include <stdio.h>

int in_squared(int value);

int main(int argc, char const *argv[])
{
    int n, control, conta;

    scanf("%d",&n);

    control = 1;

    while (control <= n)
    {
        if (control % 2 == 0)
        {
            conta = in_squared(control);
            printf("%d ^ 2 = %d\n",control,conta);
        }

        control++;
        
    }
    
    return 0;
}


int in_squared(int value){

    int result;
    result = value * value;

    return result;
}
