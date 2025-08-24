// Faça um programa que leia números continuamente até que seja digitado 0. 
// Ao final, o programa deve exibir a soma de todos os números lidos.

#include <stdio.h>

int main()
{
    int numero = -1, soma = 0;
    
    while (numero != 0) {
        printf("Digite um valor: ");
        scanf("%d", &numero);
        
        soma += numero;
    }
    
    printf("%d", soma);
    return 0;
}
