// Soma dos quadrados de três valores
#include <stdio.h>
#include <math.h>

int main() {
    
    float A, B, C, soma_quadrados;

    printf("Digite um valor para a variavel A: ");
    scanf("%f", &A);
    
    printf("Digite um valor para a variavel B: ");
    scanf("%f", &B);
    
    printf("Digite um valor para a variavel C: ");
    scanf("%f", &C);
    
    soma_quadrados = pow(A,2) + pow(B,2) + pow(C,2);
    
    printf("A soma %.2f^2 + %.2f^2 + %.2f^2 e igual a %.2f", A, B, C, soma_quadrados);
    
    return 0;
}