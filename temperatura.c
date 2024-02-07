#include <stdio.h>

int main() {
    int celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%d grau(s) Celsius equivalem a %d grau(s) Fahrenheit\n", celsius, fahrenheit);

    return 0;
}