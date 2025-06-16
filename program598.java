import java.util.*;

class program598
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();
        
        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");
        
        int i = 0;
        for(i = 0 ; i < Arr.length; i++)
        {
            System.out.println("Length of "+Arr[i]+" is : "+Arr[i].length());
        }
    }
}
