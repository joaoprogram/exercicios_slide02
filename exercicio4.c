//Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por 
//hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem 
//aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, 
//DESACELERE ou MANTENHA.

#include <stdio.h>

int main (){
  float kph = 0, mph = 0;
  printf("Digite sua velocidade atual (mph): ");
  scanf("%f", &mph);
 
 kph = mph * 1.6;
 
 if (kph > 100){
     printf("DIMINUA");
 }
 else if (kph < 80){
     printf("AUMENTA");
 }
 else{
     printf("MANTENHA");
 }
 return 0;
}
  
