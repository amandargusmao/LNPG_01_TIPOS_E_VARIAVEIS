#include <stdio.h>

int main() {

    int primeiro_numero, segundo_numero;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro_numero);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo_numero);
    
    printf("Resultado da adicao: %d + %d = %d\n", primeiro_numero, segundo_numero, primeiro_numero + segundo_numero);
    
    printf("Resultado da subtracao: %d - %d = %d\n", primeiro_numero, segundo_numero, primeiro_numero - segundo_numero);
    
    printf("Resultado da multiplicacao: %d * %d = %d\n", primeiro_numero, segundo_numero, primeiro_numero * segundo_numero);
    
    if(segundo_numero != 0) {
        printf("Resultado da divisao: %d / %d = %.2f\n", primeiro_numero, segundo_numero, (double)primeiro_numero / segundo_numero);
    } else {
        printf("Divisao por zero nao eh permitida.\n");
    }
    
    return 0;
}