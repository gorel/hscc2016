import java.util.Scanner;

public class HwHelper {
    public static String s = null;
    public static boolean evaluate(String line) {
        String[] sides = line.split("=");
        s = sides[1];

        int lhs = Integer.parseInt(sides[0]);
        int rhs = expr();
        return lhs == rhs;
    }

    public static int expr() {
        return ePrime(multi());
    }

    public static int ePrime(int res) {
        if (s.length() > 0) {
            char c = s.charAt(0);
            if (c == '+') {
                s = s.substring(1);
                return ePrime(res + multi());
            }
            else if (c == '-') {
                s = s.substring(1);
                return ePrime(res - multi());
            }
        }
        return res;
    }

    public static int multi() {
        return mPrime(primary());
    }

    public static int mPrime(int res) {
        if (s.length() > 0) {
            char c = s.charAt(0);
            if (c == '*') {
                s = s.substring(1);
                return mPrime(res * primary());
            }
            else if (c == '/') {
                s = s.substring(1);
                return mPrime(res / primary());
            }
        }
        return res;
    }

    public static int primary() {
        if (Character.isDigit(s.charAt(0))) {
            //find last digit of number
            int index = 0;
            while (index < s.length() && Character.isDigit(s.charAt(index)))
                index++;

            String numString = s.substring(0, index);
            s = s.substring(index);
            return Integer.parseInt(numString);
        }
        else {
            s = s.substring(1);
            int res = expr();
            //read in the rparen
            s = s.substring(1);
            return res;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        //get rid of the newline first!
        sc.nextLine();

        for (int i = 0; i < N; i++) {
            String name = sc.nextLine();
            int num_correct = 0;
            for (int j = 0; j < M; j++) {
                String line = sc.nextLine();
                boolean correct = evaluate(line);
                if (correct)
                    num_correct++;
            }

            int score = (int)Math.round(num_correct * 100.0 / M);
            System.out.println(name + ": " + score + "%");
        }
    }
}
