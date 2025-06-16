import java.util.*;

class program596
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);
    }
}
