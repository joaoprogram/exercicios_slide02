//Faça um programa que leia dois valores e exiba o maior valor lido.

#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    
    printf("Digite o valor 1: ");
    scanf("%d", &x);
    
    printf("Digite o valor 2: ");
    scanf("%d", &y);
    
    if (x > y){
        printf("%d", x);
    }
    else {
        printf("%d", y);
    }
    
    return 0;
}
