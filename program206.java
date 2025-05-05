import java.util.*;

class program206
{
    public static int SumFactors(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1 ; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = SumFactors(iValue);

        System.out.println("Summation of factors is : "+iRet);
    }

}