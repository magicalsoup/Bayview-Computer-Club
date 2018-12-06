import java.util.*;
 import java.io.*;
    public class Sandwich{
      static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      static PrintWriter pw = new PrintWriter(new OutputStreamWriter(System.out));
      static StringTokenizer st;
      public static void main(String[]args) throws IOException{
    	  int n = readInt(); String s = next(); LinkedList<Integer> q = new LinkedList<Integer>();
    	  for(int i = 0; i < n; i++){
    		  String c = s.substring(i, i + 1);
    		  if(c.equals("0")) q.addLast(i + 1);
    		  else q.addFirst(i + 1);
    	  }
    	  for(int i : q) pw.println(i); pw.close();
      }

      static String next () throws IOException {
    	  while (st == null || !st.hasMoreTokens())
    		  st = new StringTokenizer(br.readLine().trim());
    	  return st.nextToken();
      }
      
      static long readLong () throws IOException {
    	  return Long.parseLong(next());
      }

      static int readInt () throws IOException {
    	  return Integer.parseInt(next());
      }

      static double readDouble () throws IOException {
    	  return Double.parseDouble(next());
      }
      
      static String readLine () throws IOException {
    	  return br.readLine().trim();
      } 
  }
