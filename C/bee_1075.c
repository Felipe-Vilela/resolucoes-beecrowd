#include <stdio.h>

void divpor_2(int n1);

int main(int argc, char const *argv[])
{
    int number;

    scanf("%d",&number);

    divpor_2(number);

    return 0;
}

void divpor_2(int n1){

    int divisores;

    for (divisores = 1; divisores != 10001; divisores++){
        if (divisores % n1 == 2){
            printf("%d\n",divisores);
        }
        
    }
    

}
