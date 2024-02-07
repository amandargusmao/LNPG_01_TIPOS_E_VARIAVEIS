#include <stdio.h>

int main() {

    int numero, resto_divisao;

    printf("Digite o numero: ");
    scanf("%d" , &numero);

    resto_divisao = numero % 2;

    if (resto_divisao == 0) {
        printf("\nO numero %d eh par", numero);
    }else{
        printf("\nO numero %d eh impar", numero);
    }

    return 0;

}