#include <stdio.h>

double porcentagem(int tipo, int total);

int main(int argc, char const *argv[]){
    int i, n, quantia, coelhos, sapos, ratos, cobaias;
    double p_coelhos, p_ratos, p_sapos;
    char tipo;

    coelhos = 0;
    sapos = 0;
    ratos = 0;
    cobaias = 0;

    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        scanf("%d %c",&quantia,&tipo);
        cobaias = cobaias + quantia;
        if (tipo == 'C' || tipo == 'c'){
            coelhos = coelhos + quantia;
        }
        if (tipo == 'S' || tipo == 's'){
            sapos = sapos + quantia;
        }
        if (tipo == 'R' || tipo == 'r'){
            ratos = ratos + quantia; 
        }
    }


    p_coelhos = porcentagem(coelhos,cobaias);
    p_ratos = porcentagem(ratos,cobaias);
    p_sapos = porcentagem(sapos,cobaias);
    

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",cobaias,coelhos,ratos,sapos);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",p_coelhos,p_ratos,p_sapos);
    

    return 0;
}

double porcentagem(int tipo, int total){
    return (tipo * 100.00) / total;
}


