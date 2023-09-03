#include <stdio.h>

int formula (int a, int b, int c);

int main(int argc, char const *argv[])
{
    int v1, v2, v3, result;

    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);

    result = formula(v1, v2, v3 );

    printf("%d eh o maior\n", result);

    return 0;
}

int formula (int a, int b, int c){
    int passo1, passo2;

    passo1 = (a + b + abs(a - b)) / 2;
    passo2 = (passo1 + c + abs(passo1 - c)) / 2;

    return passo2;
}