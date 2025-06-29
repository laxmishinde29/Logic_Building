import java.util.*;

class program632
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        int iSum = 0;
        int iDigit = 0;

        while(iNo >= 10)
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }

            if(iSum >= 10)
            {
                iNo = iSum;
                iSum = 0;
            }
            else
            {
                iNo = iSum;
                break;
            }
        }

        System.out.println("Generic Root is : "+iSum);
    }
}