// Ler dois números n1 e n2 / Exibir todos os números entre n1 e n2

#include <stdio.h>

int main(){
    int n1 = 0, n2 = 0;
    
    printf("Digite o número inicial: ");
    scanf("%d", &n1);
    
    printf("Digite o número final: ");
    scanf("%d", &n2);
    
    for (int i = n1 + 1; i < n2; i++){
        printf("%d", i);
    }
    return 0;
}
