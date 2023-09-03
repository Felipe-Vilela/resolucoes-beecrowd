#include <stdio.h>

void is_odd_even(int value);

int main(int argc, char const *argv[])
{
    int n, control, number, result;

    control = 1;
    
    scanf("%d",&n);


    while (control <= n)
    {
        scanf("%d",&number);

        is_odd_even(number);

        control++;
        
    }
    
    return 0;
}


void is_odd_even(int value){
    if (value % 2 == 0 && value > 0)
    {
       printf("EVEN POSITIVE\n");
    }else if (value % 2 == 0 && value < 0)
    {
        printf("EVEN NEGATIVE\n");
    }else if (value % 2 != 0 && value > 0)
    {
        printf("ODD POSITIVE\n");
    }else if (value % 2 != 0 && value < 0)
    {
        printf("ODD NEGATIVE\n");
    }else
    {
        printf("NULL\n");
    }  
}