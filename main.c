#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    printf("Seja bem-vindo ao meu programa que faz soma\n");
    printf("Digite um numero: ");
    scanf("%f",&n1);
    printf("\nDigite um outro numero: ");
    scanf("%f",&n2);
    printf("O resultado:  %.2f",n1+n2);
        return 0;
}
