// Multiplicação e soma entre valores dada determinada ordem
#include <stdio.h>

int main() {
    
    float A, B, C, D, P, S;

    printf("Digite um valor para a variavel A: ");
    scanf("%f", &A);
    
    printf("Digite um valor para a variavel B: ");
    scanf("%f", &B);
    
    printf("Digite um valor para a variavel C: ");
    scanf("%f", &C);
    
    printf("Digite um valor para a variavel D: ");
    scanf("%f", &D);
    
    P = A * C;
    S = B + D;
    
    printf("O produto entre %.2f e %.2f e igual a %.2f \nA soma entre %.2f e %.2f e igual a: %.2f", A, C, P, B, D, S);
    
    return 0;
}