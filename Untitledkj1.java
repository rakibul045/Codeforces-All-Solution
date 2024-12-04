import java.util.*;
public class SpellCheck
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int cnt=0; cnt<t; cnt++)
        {
            int n = sc.nextInt();
            String s = sc.nextLine();
            String str = sc.nextLine();
            if (n!=5)
            {
                System.out.println("NO");
                continue;
            }
            int c1=0,c2=0,c3=0,c4=0,c5=0;
            for (int i=0; i<n; i++)
            {
                char ch = str.charAt(i);
                if (ch=='T')c1=1;
                if (ch=='i')c2=1;
                if (ch=='m')c3=1;
                if (ch=='u') c4 = 1;
                if (ch=='r')c5=1;
            }
            if (c1==1 && c2==1 && c3==1 && c4==1 && c5==1)
            System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
