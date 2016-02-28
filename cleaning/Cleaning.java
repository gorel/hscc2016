import java.util.Scanner;

public class Cleaning {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int I = sc.nextInt();
        int J = sc.nextInt();

        char[][] graph = new char[N][M];

        //clear the empty newline first!
        sc.nextLine();

        for (int i = 0; i < N; i++) {
            String line = sc.nextLine();
            for (int j = 0; j < M; j++) {
                graph[i][j] = line.charAt(j);
            }
        }

        floodFill(graph, I, J);

        //print graph
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++)
                System.out.print(graph[i][j]);
            System.out.println();
        }
    }

    public static void floodFill(char[][] gr, int I, int J) {
        if (I >= 0 && I < gr.length && J >= 0 && J < gr[0].length && gr[I][J] == 'D') {
            //clean this space, then recursively call adjacent tiles
            gr[I][J] = 'C';

            floodFill(gr, I - 1, J);
            floodFill(gr, I + 1, J);
            floodFill(gr, I, J - 1);
            floodFill(gr, I, J + 1);
        }
    }
}
