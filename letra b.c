// Conversor Fahrenheit -> Celsius
#include <stdio.h>
#include <conio.h>
 
int main() {
    float Celsius, Fahrenheit;
    printf("\nDigite o Valor em Fahrenheit:");
    scanf("%f", &Fahrenheit);
    
    Celsius = (((Fahrenheit - 32) * 5) / 9);
    printf("O valor em Celsius e: %.2f", Celsius);
    
    getch();

    return 0;
}