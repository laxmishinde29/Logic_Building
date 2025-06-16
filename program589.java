import java.util.*;

// India is my country
// 4

class program589
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iCnt = 0, i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] ==' ')
            {
                iCnt++;
            }
        }
        System.out.println("Number of wwords  are : "+ (iCnt+1));
    }
}
