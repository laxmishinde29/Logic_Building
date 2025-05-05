import java.util.*;

class program261
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        int i = 0;
        System.out.println("Array Length is : "+Arr.length);        // length property
        System.out.println("String Length is : "+name.length());    // length method
    }
}