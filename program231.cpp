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

        int CalculateDigits(int iNo)
        {
                int iCount = 0;

                while(iNo != 0)
                {
                    iCount++;
                    iNo = iNo / 10;
                }
                return iCount;
        }

        void DisplayDigitsCount()
        {
            int i = 0, iRet = 0;

            for(i = 0; i < iSize; i++)
            {
                iRet = CalculateDigits(Arr[i]);
                cout<<Arr[i]<<" contains "<<iRet<<" digits in it"<<endl;
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
    
    aobj->DisplayDigitsCount();

    delete aobj;
    
    return 0;
}