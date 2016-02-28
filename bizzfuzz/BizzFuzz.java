public class BizzFuzz {
    public static void main(String[] args) {
        for (int i = 1; i < 101; i++) {
            boolean mod4 = (i % 4 == 0);
            boolean mod7 = (i % 7 == 0);
            if (mod4)
                System.out.print("Bizz");
            if (mod7)
                System.out.print("Fuzz");
            if (!mod4 && !mod7)
                System.out.print(i);
            System.out.println();
        }
    }
}
