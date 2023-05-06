// Calcular o quadrado de um número
#include <math.h>
#include <stdio.h>
#include <conio.h>
 
int main() {
 
  float valor;
 
  printf("Digite um valor: ");
  scanf("%f", &valor);
 
  printf("%.2f elevado ao quadrado e igual a: %.2f", valor, pow(valor, 2));
 
    getch();

  return 0;
}