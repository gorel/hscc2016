import java.util.Scanner;
import java.util.ArrayList;

public class Zombie {
	public static class Point {
		public int d0;
		public int d1;
		public Point(int d0, int d1) {
			this.d0 = d0;
			this.d1 = d1;
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int m = sc.nextInt();
		
		sc.nextLine();
		char[][] grid = new char[n][m];
		gridTrack = new boolean[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				gridTrack[i][j] = false;
		
		int startD0 = 0, startD1 = 0, endD0 = 0, endD1 = 0;
		for (int i = 0; i < n; i++) {
			String newLine = sc.nextLine();
			for (int j = 0; j < n; j++) {
				grid[i][j] = newLine.charAt(j);
				if (grid[i][j] == 'S') {
					startD0 = i;
					startD1= j;
				} else if (grid[i][j] == 'E') {
					endD0 = i;
					endD1 = j;
				}
			}
		}

		System.out.println(dfs(grid, startD0, startD1, endD0, endD1));	
	}

	public static boolean[][] gridTrack;
	
	private static ArrayList<Point> getSurroundingPoints(Point p) {
		int d0b = gridTrack.length;
		int d1b = gridTrack[0].length;
		ArrayList<Point> array = new ArrayList<Point>();
		if (p.d0 > 0 && !gridTrack[p.d0-1][p.d1])
			array.add(new Point(p.d0-1, p.d1));
		if (p.d0 < d0b - 1 && !gridTrack[p.d0+1][p.d1])
			array.add(new Point(p.d0+1, p.d1));
		if (p.d1 > 0 && !gridTrack[p.d0][p.d1-1])
			array.add(new Point(p.d0, p.d1-1));
		if (p.d1 < d1b - 1 && !gridTrack[p.d0][p.d1+1])
			array.add(new Point(p.d0, p.d1+1));
		return array;
	}
	
	private static boolean dfs(char[][] grid, int sd0, int sd1, int ed0, int ed1) {
		gridTrack[sd0][sd1] = true;
		for (Point p : getSurroundingPoints(new Point(sd0, sd1))) {
			if (p.d0 == ed0 && p.d1 == ed1) {
				return true;
			} else if (grid[p.d0][p.d1] == 'X') {
				continue;
			} else if (dfs(grid, p.d0, p.d1, ed0, ed1)) {
				return true;
			}
		}
		gridTrack[sd0][sd1] = false;
		return false;
	}
}
