import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); age birth[] = new age[n];
        for(int i=0; i<n; i++){
            birth[i] = new age(sc.nextInt(), sc.nextInt(), sc.nextInt());
        }
        int y = 2007-18, m = 2, d = 27;
        for(int i=0; i<n; i++){
            if(birth[i].y < y ||
            (birth[i].y == y && birth[i].m < m) ||
            (birth[i].y == y && birth[i].m == m && birth[i].d <= d))
                System.out.println("Yes");
            else
                System.out.println("No");
        }
        sc.close();
    }
    static class age {
        int y, m, d;
        public age(int y, int m, int d){
            this.y = y;
            this.m = m;
            this.d = d;
        }
    }
}
