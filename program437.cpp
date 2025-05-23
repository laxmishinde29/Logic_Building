#include<iostream>
using namespace std;

template <class T>
T Minimum(T Arr[], int iSize)
{
    T Min = Arr[0];
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int iLength = 0;
    float *ptr = NULL;
    int i = 0; 
    float fRet = 0.0f;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements : \n";
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet = Minimum(ptr,iLength);
    cout<<"Minimum is : "<<fRet<<"\n";
    delete []ptr;
    
    return 0;
}