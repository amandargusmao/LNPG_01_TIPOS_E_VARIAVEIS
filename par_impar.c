#include <stdio.h>

int main() {

    int num, resto_divisao;

    printf("Digite o numero: ");
    scanf("%d" , &num);

    resto_divisao = num % 2;

    if (resto_divisao == 0) {
        printf("\nO numero %d eh par", num);
    }else{
        printf("\nO numero %d eh impar", num);
    }

    return 0;

}