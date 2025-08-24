//Faça um programa que leia um número N e calcule o somatório a seguir:

#include <stdio.h>

int main (){
    
    int numero = 0, soma = 0, i;
    
    printf("Digite o N de parada: ");
    scanf("%d", &numero);
    
    for (i = 1; i <= numero; i++){
        soma += i * i;
    }
    printf("%d", soma);
    return 0;
}
