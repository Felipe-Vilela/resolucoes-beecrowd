#include <stdio.h>

int main(int argc, char const *argv[])
{
    double area, pi,  raio;

    scanf("%lf",&raio);

    pi = 3.14159;
    area = pi * (raio * raio);

    printf("A=%.4lf\n", area);
    return 0;
}
