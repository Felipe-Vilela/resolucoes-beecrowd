#include <stdio.h>
#include <math.h>

void baskhara(double a, double b, double c);
double delta(double a, double b, double c);

int main(int argc, char const *argv[])
{
    double a, b ,c;

    scanf("%lf %lf %lf", &a ,&b ,&c );

    baskhara(a,b,c);

    return 0;
}


double delta(double a, double b, double c){
    
   return  (b * b) - (4 * a * c);
    

}


void baskhara(double a, double b, double c){
    
    double x1, x2;

    if (delta(a,b,c) < 0 || a == 0 )
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x1 = (-b  + sqrt(delta(a,b,c))) / (2 * a);
        x2 = (-b  - sqrt(delta(a,b,c))) / (2 * a);
        
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);

    }
    
    




}