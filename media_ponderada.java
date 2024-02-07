import java.util.Scanner;

public class media_ponderada {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada;
        
        System.out.print("Digite a primeira nota e seu peso: ");
        nota1 = scanner.nextDouble();
        peso1 = scanner.nextDouble();
        
        System.out.print("Digite a segunda nota e seu peso: ");
        nota2 = scanner.nextDouble();
        peso2 = scanner.nextDouble();
        
        System.out.print("Digite a terceira nota e seu peso: ");
        nota3 = scanner.nextDouble();
        peso3 = scanner.nextDouble();
        
        mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
        
        System.out.printf("A média ponderada é: %.2f\n", mediaPonderada);
        
        scanner.close();
    }
}
