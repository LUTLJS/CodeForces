import java.util.*;
public class TeamOlympiad {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = 0, count = 0;
        int[] a = new int[n];
        while(k < n) {
            a[k++] = sc.nextInt();
        }
        sc.close();
        String s = "";
        for(int i = 0; i < n - 2; i++) {
            if(a[i] == 0) continue;
            int num1 = a[i], num2 = -1, index1 = i + 1, index2 = -1, index3 = -1;
            for(int j = i + 1; j < n; j++) {
                if(a[j] == 0) continue;
                if(index2 == -1) {
                    if(a[j] != num1) {
                        index2 = j + 1;
                        num2 = a[j];
                    }
                } else {
                    if(a[j] != num1 && a[j] != num2) {
                        index3 = j + 1;
                        break;
                    }
                }
            }
            if(index3 != -1) {
                a[index2 - 1] = 0;
                a[index3 - 1] = 0;
                count++;
                s += index1 + " " + index2 + " " + index3 + "\n";
            }
        }
        if(s.length() == 0) {
            System.out.print("0");
        } else {
            System.out.print(count + "\n" + s.substring(0, s.length() - 1));
        }
    } 
}