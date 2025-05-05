#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int No)
        {
            iSize = No;
            Arr =  new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Elements are : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }  
        }

        int SumDigits(int iNo)
        {
                int iSum = 0;
                int iDigit = 0;

                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }
                return iSum;
        }

        void DisplayDigitsSum()
        {
            int i = 0, iRet = 0;

            for(i = 0; i < iSize; i++)
            {
                iRet = SumDigits(Arr[i]);
                cout<<"Sum of digits of "<<Arr[i]<<" is : "<<iRet<<endl;
            }
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);   

    aobj->Accept();
    
    aobj->DisplayDigitsSum();

    delete aobj;
    
    return 0;
}