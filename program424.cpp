#include<iostream>
using namespace std;

float Addition(float No1,  float No2)
{
    float Ans;

    Ans = No1 + No2;
    
    return Ans;
}

int main()
{
    float Value1 = 10.78f, Value2 = 11.07f;
    float Ret = 0.0f;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}