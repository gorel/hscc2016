import java.util.Scanner;

public class Socks2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int red = 0;
        int green = 0;
        int blue = 0;
        int white = 0;
        int black = 0;

        int N = sc.nextInt();

        //read the empty newline first!
        sc.nextLine();
        for (int i = 0; i < N; i++) {
            String color = sc.nextLine();
            if (color.equals("red"))
                red++;
            else if (color.equals("green"))
                green++;
            else if (color.equals("blue"))
                blue++;
            else if (color.equals("white"))
                white++;
            else
                black++;
        }

        int extra = (red % 2) + (green % 2) + (blue % 2) + (white % 2) + (black % 2);
        System.out.println(extra / 2);
    }
}