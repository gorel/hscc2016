import java.util.Scanner;

public class Business {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[] people = new int[n];
		for (int i = 0; i < n; i++)
			people[i] = sc.nextInt();
        	
		double total = 0;
		for (int i = 0; i < n; i++)
			total += people[i];
		
		for (int i = 0; i < n; i++) {
			int percent = (int) Math.round(100 * people[i] / total);
			System.out.println(percent + "%");
		}
	}
}
