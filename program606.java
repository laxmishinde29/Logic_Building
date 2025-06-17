import java.util.*;

class program606
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        StringBuffer sb = new StringBuffer(str);

        sb = sb.reverse();

        System.out.println("Reverse string is : "+sb);
    }
}
