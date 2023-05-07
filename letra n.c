// Quadrado da soma de três valores
#include <stdio.h>
#include <math.h>

int main() {
    
    float A, B, C, quadradoDaSoma;

    printf("Digite um valor para a variavel A: ");
    scanf("%f", &A);
    
    printf("Digite um valor para a variavel B: ");
    scanf("%f", &B);
    
    printf("Digite um valor para a variavel C: ");
    scanf("%f", &C);
    
    quadradoDaSoma =  pow(A+B+C,2);
    
    printf("O quadrado da soma %.2f + %.2f + %.2f e igual a %.2f", A, B, C, quadradoDaSoma);
    
    return 0;
}