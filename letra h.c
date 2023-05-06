// Cálculo do volume de uma caixa retangular
# include <stdio.h>
# include <conio.h>
 
int main() {
 
int volume, comprimento, largura, altura;
 
printf("Digite o valor do comprimento da caixa em cm:");
 scanf("%d", &comprimento);
 
printf("Digite o valor da altura da caixa em cm:");
 scanf("%d", &altura);
 
printf("Digite o valor da largura da caixa em cm:");
 scanf("%d", &largura);
 
   volume = comprimento * largura * altura;
 
printf("O volume da caixa e: %d cm^3", volume);
 
getch();

    return 0;
}