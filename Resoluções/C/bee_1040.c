#include <stdio.h>

double media(double n1, double n2, double n3, double n4);
double mediafinal(double nota1, double nota2);
void situacao(double nota);
void situacaofin(double nota);


int main(int argc, char const *argv[])
{
    double nota1,nota2,nota3,nota4, media1, notaexame, media2;

    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    media1 = media(nota1,nota2,nota3,nota4);

    printf("Media: %.1lf\n", media1);

    situacao(media1);

    if (media1 >= 5.0 && media1 <= 6.9)
    {
        
        scanf("%lf",&notaexame);
        printf("Nota do exame: %.1lf\n",notaexame);
        media2 = mediafinal(media1,notaexame);
        situacaofin(media2);
        printf("Media final: %.1lf\n",media2);
    }

    return 0;
}

double media(double n1, double n2, double n3, double n4){
    int peso1, peso2, peso3, peso4, somapesos;
    double resultado;

    peso1 = 2.0;
    peso2 = 3.0;
    peso3 = 4.0;
    peso4 = 1.0;
    somapesos = peso1 + peso2 + peso3 + peso4;

    resultado = ((n1 * peso1) + (n2 * peso2) + (n3 * peso3) + (n4 * peso4)) / somapesos;

    return resultado;
}

void situacao(double nota){

    if (nota >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else{
        if (nota < 5){
            printf("Aluno reprovado.\n");  
        }
        else
        {
            printf("Aluno em exame.\n");
        }
    }
}


double mediafinal(double nota1, double nota2){
    return (nota1 + nota2) / 2;
}

void situacaofin(double nota){
    if (nota >= 5.0)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    
    
}
