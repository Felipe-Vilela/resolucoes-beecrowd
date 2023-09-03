#include <stdio.h>

int formuladivisao(int temposegundos, int valorconversao);
int formularesto(int tempo, int conversao);

int main(int argc, char const *argv[])
{
    int duracaosegundos, horas, minutos, segundos, conversaohoras, conversaoms;

    //Conversão hora para segundo 1 hr = 3600s
    conversaohoras = 3600;
    //conversão hora para minuto ou minuto para segundo 1 hora = 60 min e 1 min = 60s
    conversaoms = 60;

    scanf("%d", &duracaosegundos);

    horas = formuladivisao(duracaosegundos, conversaohoras);
    minutos = formuladivisao(formularesto(duracaosegundos,conversaohoras),conversaoms);
    segundos = formularesto(duracaosegundos,conversaoms);
   
    printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}

int formuladivisao(int temposegundos, int valorconversao){
    int result;
    result = temposegundos / valorconversao;
    return result;
}

int formularesto(int tempo, int conversao){
    int result;
    result = tempo % conversao;
    return result;

}