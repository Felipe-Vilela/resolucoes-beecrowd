#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, x;

    for (i = 1,x = 7; i <= 9; i = i + 2, x = x + 2)
    {
        
        for (j = x; j >= x - 2; j--)
        {
            printf("I=%d ",i);
            printf("J=%d\n",j);
        }
    }
    


    return 0;
}
