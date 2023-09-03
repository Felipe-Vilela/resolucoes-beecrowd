#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x,y,media;

    scanf("%lf", &x);
    scanf("%lf", &y);

    media = (x * 3.5 + y * 7.5) / 11;

    printf("MEDIA = %.5lf", media);

    return 0;
}
