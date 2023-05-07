// Calcular uma variável elevada a outra variável
#include <stdio.h>
#include <math.h> 
int main() {
 
  float valor1, valor2;
 
  printf("Digite o valor da base: ");
  scanf("%f", &valor1);
 
  printf("Digite o valor do expoente: ");
  scanf("%f", &valor2);
 
  printf("%.2f elevado a %.2f e igual a: %.2f", valor1, valor2,
         pow(valor1, valor2));

  return 0;
}