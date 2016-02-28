public class Fibs {
    public static void main(String[] args) {
        for (int i = 1; i < 101; i++) {
            boolean mod2 = (i % 2 == 0);
            boolean mod5 = (i % 5 == 0);
            boolean mod9 = (i % 9 == 0);
            if (mod2)
                System.out.print("Fibs");
            if (mod5)
                System.out.print("Jubs");
            if (mod9)
                System.out.print("Magoo");
            if (!mod2 && !mod5 && !mod9)
                System.out.print(i);
            System.out.println();
        }
    }
}
