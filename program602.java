import java.util.*;

class program602
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        System.out.println("Enter the character that you want to search : ");
        String s = sobj.nextLine();

        char ch = s.charAt(0);

        System.out.println("Entered character is : "+ch);
    }
}
