#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number, horastrabalhadas;
    double precohora, salary;

    scanf("%d",&number);
    scanf("%d",&horastrabalhadas);
    scanf("%lf",&precohora);

    salary = horastrabalhadas * precohora;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}





