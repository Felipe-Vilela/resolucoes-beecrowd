#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, x , y, troca , result;

    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d %d",&x,&y);
        result = 0;

        if (x > y){
            troca = x;
            x = y;
            y = troca;
        }

        x++;

        for (x; x < y; x++){
            if (x % 2 != 0){
                result = result + x;
            }
                
        }
        printf("%d\n",result);
    }
    
    return 0;
}
