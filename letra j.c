// Calcular uma variável elevada a outra variável
#include <math.h>
#include <stdio.h>
#include <conio.h>
 
int main() {
 
  float valor1, valor2;
 
  printf("Digite um valor: ");
  scanf("%f", &valor1);
 
  printf("Digite outro valor: ");
  scanf("%f", &valor2);
 
  printf("%.2f elevado a %.2f e igual a: %.2f", valor1, valor2,
         pow(valor1, valor2));

    getch();

  return 0;
}