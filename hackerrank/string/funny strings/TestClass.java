
import java.io.BufferedReader;
import java.io.InputStreamReader;


class TestClass {
    public static void main(String args[] ) throws Exception {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
        for (int i = 0; i < N; i++) {
            String liner = br.readLine();
            String line2 = new StringBuilder(liner).reverse().toString();
            Boolean flag = check(liner,line2);
            if(flag)
            {
                System.out.println("Funny");
            }
            else
            {
                System.out.println("Not Funny");
            }
        }
        
    }
    public static Boolean check(String s1,String s2)
    {
        char[] t1 = s1.toCharArray();
        char[] t2 = s2.toCharArray();
        for(int j=1;j<s1.length();j++)
        {
           if(Math.abs(t1[j]-t1[j-1]) != Math.abs(t2[j] - t2[j-1]))
           {
                return false;
           }

        }
        return true;
    }
}
