// Troca dos valores de variáveis
#include <stdio.h>
#include <conio.h>
 
int main() {
 
float a,b,c;
 
printf("Digite um valor para a variavel a: ");
 scanf("%f", &a);
 
printf("Digite um valor para a variavel B: ");
 scanf("%f", &b);
 
   c = a;
   a = b;
   b = c;
 
printf("O valor de a se tornou: %.2f", a);
printf("\nO valor de b se tornou: %.2f", b);

getch();

return 0;
 
}