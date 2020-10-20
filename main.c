#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float a,b;
    char op;
    printf("Digite (ex:numero1 op numero2): ");
    scanf("%f%c%f",&a,&op,&b);
    switch(op)
    {
    case '+':
        printf("Resultado: %.2f",a+b);
    break;
    case '-':
        printf("Resultado: %.2f",a-b);
    break;
    case '*':
        printf("Resultado: %.2f",a*b);
    break;
    case '/':
        if(b==0)
            printf("Não existe divisão por zero");
        else
            printf("Resultado:%.2f",a/b);
        break;
    default :
        printf("Deu ruim");
    }

    return 0;
}
