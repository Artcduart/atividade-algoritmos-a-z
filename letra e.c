// Valor de uma prestação de um bem em atraso
#include <stdio.h>
#include <conio.h>

int main() {
float prestaçao, valor, taxa;
int tempo;
 
printf("Digite o valor do bem em atraso:");
 scanf("%f", &valor);
 
printf("Digite o valor do tempo em meses:");
 scanf("%d", &tempo);
 
printf ("Digite o valor da taxa:");
 scanf("%f", &taxa);
 
prestaçao = valor + (valor * (taxa/100) * tempo);
 
printf("O valor da prestacao e: %.2f", prestaçao);
 
getch();

return 0;
}