// Adições e multiplicações possíveis entre 4 valores
#include <stdio.h>

int main() {
 
float A,B,C,D,soma_AB,soma_AC,soma_AD,soma_BC,soma_BD,soma_CD,mult_AB,mult_AC,mult_AD,mult_BC,mult_BD,mult_CD;

printf("Digite um valor para a variavel a: ");
 scanf("%f", &A);
 
printf("Digite um valor para a variavel B: ");
 scanf("%f", &B);
 
printf("Digite um valor para a variavel C: ");
 scanf("%f", &C);
 
printf("Digite um valor para a variavel D: ");
 scanf("%f", &D);
 
      soma_AB = A + B;
      soma_AC = A + C;
      soma_AD = A + D;
      soma_BC = B + C;
      soma_BD = B + D;
      soma_CD = C + D;
      mult_AB = A * B;
      mult_AC = A * C;
      mult_AD = A * D;
      mult_BC = B * C;
      mult_BD = B * D;
      mult_CD = C * D;
 
printf("\nA + B = %.2f\n", soma_AB);
printf("A + C = %.2f\n", soma_AC); 
printf("A + D = %.2f\n", soma_AD); 
printf("B + C = %.2f\n", soma_BC); 
printf("B + D = %.2f\n", soma_BD); 
printf("C + D = %.2f\n", soma_CD);
printf("A * B = %.2f\n", mult_AB);
printf("A * C = %.2f\n", mult_AC); 
printf("A * D = %.2f\n", mult_AD); 
printf("B * C = %.2f\n", mult_BC);
printf("B * D = %.2f\n", mult_BD); 
printf("C * D = %.2f\n", mult_CD);

return 0;

}