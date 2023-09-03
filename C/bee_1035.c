#include <stdio.h>

void verificacao(int n1, int n2, int n3, int n4 );
int soma(int v1, int v2);

int main(int argc, char const *argv[])
{
    int a,b,c,d;

    scanf("%d %d %d %d", &a ,&b ,&c ,&d );

    verificacao(a,b,c,d);


    return 0;
}

int soma(int v1, int v2){
    return v1 + v2;
}

void verificacao(int n1, int n2, int n3, int n4 ){

    if (n2 > n3 && n4 > n1)
    {
        if(soma(n3,n4) > soma(n1,n2) && n3 > 0 && n4 > 0 )
        {
             if (n1 %  2 == 0 )
             {
                printf("Valores aceitos\n");
             }   else
             {
               printf("Valores nao aceitos\n");
             }
             
        }  else
        {
            printf("Valores nao aceitos\n");
        }
        
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    
    


}