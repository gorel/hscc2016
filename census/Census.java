import java.util.Scanner;

public class Census {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] ages = new int[100];

        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            ages[sc.nextInt()]++;
        }

        for (int i = 1; i < 100; i++)
            System.out.println(ages[i]);
    }
}
