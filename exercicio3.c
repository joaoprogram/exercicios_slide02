//Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. 
//Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. 
//Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.

#include <stdio.h>

int main ()
{
    float valor = 0, conversao = 0;
    printf("Digite o valor do celular em dólares: ");
    scanf("%f", &valor);
    
    printf("Valor convertido (real): %.2f\n", valor * 3.17);
    
    if ((valor * 3.17 > 1000)){
        printf("Muito caro!");
    }
    else{
        printf("Bom negócio!");
    }
    
    return 0;
}
