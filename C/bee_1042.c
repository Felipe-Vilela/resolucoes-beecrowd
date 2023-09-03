#include <stdio.h>

void crescente(int n1, int n2, int n3);
void resultado(int num1, int num2, int num3);

int main(int argc, char const *argv[])
{
    int number1, number2, number3;

    scanf("%d %d %d", &number1, &number2, &number3);

    crescente(number1,number2,number3);

    printf("\n%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}

void crescente(int n1, int n2, int n3){
    int aux;
  

  if (n1 > n3)
    {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }

     if (n1 > n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
     if (n2 > n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    resultado(n1,n2,n3);

    return 0;
}

void resultado(int num1, int num2, int num3){
   printf("%d\n", num1);
   printf("%d\n", num2);
   printf("%d\n", num3);
}
