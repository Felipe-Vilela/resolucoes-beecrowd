#include <stdio.h>

int main(int argc, char const *argv[])
{
    double A,B,C,media,pesoa,pesob,pesoc,somapesos;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    pesoa = 2;
    pesob = 3;
    pesoc = 5;
    somapesos =  pesoa + pesob +pesoc;
    media = (A * pesoa + B * pesob + C * pesoc) / somapesos;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}
