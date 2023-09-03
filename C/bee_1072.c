#include <stdio.h>

int in_interval(int valor);

int main(int argc, char const *argv[])
{
    int n, controle, number, cin, cout;

    scanf("%d",&n);

    controle = 1;
    cin = 0;
    cout = 0;

    while (controle <= n)
    {
        scanf("%d",&number);

        if (in_interval(number))
        {
            cin++;
        }else
        {
            cout++;
        }

        controle++;
        
    }

    printf("%d in\n",cin);
    printf("%d out\n",cout);
    
    return 0;
}


int in_interval(int valor){

    if (valor >= 10 && valor <= 20)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}