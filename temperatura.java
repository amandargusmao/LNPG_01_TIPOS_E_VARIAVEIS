import java.util.Scanner;

public class temperatura {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite a temperatura em Celsius: ");
        int celsius = scanner.nextInt();

        int fahrenheit = (celsius * 9 / 5) + 32;

        System.out.println(celsius + "° Celsius equivalem a " + fahrenheit + "° Fahrenheit");

        scanner.close();
    }
}
