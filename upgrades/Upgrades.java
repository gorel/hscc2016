import java.util.*;

public class Upgrades {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int M = input.nextInt();
        // clear line
        input.nextLine();

        ArrayList<Person> names = new ArrayList<Person>();
        for (int i = 0; i < N; i++) {
            names.add(new Person(input.nextLine()));
        }

        Collections.sort(names);

        for (int i = 0; i < M; i++) {
            System.out.println(names.get(i));
        }
    }
}

class Person implements Comparable<Person> {
    String first;
    String last;
    public Person(String name) {
        String[] parts = name.split(" ");
        first = parts[0];
        last = parts[1];
    }

    public int compareTo(Person o) {
        if (first.equalsIgnoreCase("bob") && o.first.equalsIgnoreCase("bob")) {
            return last.compareTo(o.last);
        } else if (first.equalsIgnoreCase("bob")) {
            return -1;
        } else if (o.first.equalsIgnoreCase("bob")) {
            return 1;
        } else {
            return last.compareTo(o.last);
        }
    }

    public String toString() {
        return first + " " + last;
    }
}
