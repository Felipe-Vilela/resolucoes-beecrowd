#include <stdio.h>

int main(int argc, char const *argv[])
{
    double raio, pi, volume;

    scanf("%lf",&raio);

    pi = 3.14159;
    volume = (4.0/3) * pi * (raio * raio * raio);

    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
