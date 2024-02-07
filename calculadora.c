#include <stdio.h>

int main() {
    
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Resultado da adicao: %d + %d = %d\n", num1, num2, num1 + num2);
    
    printf("Resultado da subtracao: %d - %d = %d\n", num1, num2, num1 - num2);
    
    printf("Resultado da multiplicacao: %d * %d = %d\n", num1, num2, num1 * num2);
    
    if(num2 != 0) {
        printf("Resultado da divisao: %d / %d = %.2f\n", num1, num2, (double)num1 / num2);
    } else {
        printf("Divisao por zero nao eh permitida.\n");
    }
    
    return 0;
}