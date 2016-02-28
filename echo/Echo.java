import java.util.Scanner;

public class Echo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        //read the newline first!
        sc.nextLine();

        for (int i = 0; i < N; i++) {
            String s = sc.nextLine();
            System.out.println(s);
        }
    }
}
