#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Voce eh maior de idade.\n");
    } else {
        printf("Voce nao eh maior de idade.\n");
    }
    return 0;
}
