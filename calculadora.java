import java.util.Scanner;

public class calculadora {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite o primeiro número: ");
        int primeiro_numero = scanner.nextInt();
        
        System.out.print("Digite o segundo número: ");
        int segundo_numero = scanner.nextInt();
        
        System.out.println("Resultado da adição: " + (primeiro_numero + segundo_numero));
        
        System.out.println("Resultado da subtração: " + (primeiro_numero - segundo_numero));
        
        System.out.println("Resultado da multiplicação: " + (primeiro_numero * segundo_numero));
        
        if (segundo_numero != 0) {
            System.out.println("Resultado da divisão: " + ((double) primeiro_numero / segundo_numero));
        } else {
            System.out.println("A divisão por zero não é permitida.");
        }
        
        scanner.close();
    }
}
