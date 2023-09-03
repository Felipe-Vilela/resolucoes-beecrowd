#include <stdio.h>

int main(int argc, char const *argv[])
{
    double i, j,x,z;

    printf("I=%.0lf J=%.0lf\n",i,j);
    for (i = 0, j = 1; i <= 2; i = i + 0.2, j = j + 0.2){

        for (j = 1; i <= 3; j++)
        {
            printf("I=%d J=%d\n");
        }
        
        printf("I=%.1lf J=%.1lf\n",i,j);
        printf("I=%.1lf J=%.1lf\n",i,j + 1);
        printf("I=%.1lf J=%.1lf\n",i,j + 2);
        
    }
    
    return 0;
}
