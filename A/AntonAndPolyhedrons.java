import java.util.*;
public class AntonAndPolyhedrons {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        sc.nextLine();
        while(sc.hasNextLine()) {
            switch (sc.nextLine()) {
                case "Tetrahedron":
                    sum += 4;
                    break ;
                case "Cube":
                    sum += 6;
                    break ;
                case "Octahedron":
                    sum += 8;
                    break ;
                case "Dodecahedron":
                    sum += 12;
                    break ;
                default:
                    sum += 20;
                    break;
            }
        }
        sc.close();
        System.out.print(sum + "");
    }
}