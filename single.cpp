#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {
            cout<<"Inside Base Constructor\n";
            A = 11;
            B = 21;
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Fun()
        {   "Inside Base Fun\n"; }
};

class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {   
            cout<<"Inside Derived constructor\n";
            X = 51;
            Y = 101;    
        }
        ~Derived()
        {   cout<<"Inside Derived destructor\n";   }
        void Gun()
        {   cout<<"Inside Derived gun\n";   }
};

int main()
{
    Derived dobj;   // Constructor of Base  Constructor of Derived
    cout<<"Size of object is : "<<sizeof(dobj)<<"\n";   // 16

    cout<<dobj.A<<"\n"; // 11
    cout<<dobj.B<<"\n"; // 21
    cout<<dobj.X<<"\n"; // 51
    cout<<dobj.Y<<"\n"; // 101
    
    dobj.Fun();     // Base Fun
    dobj.Gun(); 

    return 0;
}