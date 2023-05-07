// Calcular o quadrado de um número
#include <stdio.h>
#include <math.h> 
int main() {
 
  float valor;
 
  printf("Digite um valor para ser elevado ao quadrado: ");
  scanf("%f", &valor);
 
  printf("%.2f elevado ao quadrado e igual a %.2f", valor, pow(valor, 2));

  return 0;
}