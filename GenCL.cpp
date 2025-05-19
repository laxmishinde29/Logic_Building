// Generic Singly Circular LL

#include<iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
    public:
        struct node<T> * First;
        struct node<T> * Last;
        int iCount;

        SinglyCL();

        void Display();
        int Count();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"LinkedList is empty\n";
        return;
    }
    
    cout<<"Elements of LinkedList are : \n";
    do
    {    
        cout<<"|"<<First->data<<"|->";
        First = First->next;
    }while(First != Last->next);
    cout<<"\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        newn->next = First;
        Last = First;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        newn->next = First;
        Last = First ;
    }
    else
    {
        Last->next = newn;
        newn->next = First;
        Last = newn;
    }
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T no, int pos)
{
    if(pos < 0 || pos > iCount+1)
    {
        cout<<"invalid position";
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> * newn = NULL;
        struct node<T> * temp = First;
        for(int i = 1; i<pos-1; i++)
        {
            temp = temp->next;
        }
        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;   
        iCount++;        
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct node<T> * temp = First;
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int pos)
{
    if(pos < 0 || pos > iCount)
    {
        cout<<"invalid position";
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> * temp1 = NULL;
        struct node<T> * temp2 = First;
        for(int i = 1; i<pos-1; i++)
        {
            temp2 = temp2->next;
        }

        temp1 = temp2->next;
        temp2->next = temp1->next;
        delete temp1;

        iCount--;        
    }
}

int main()
{
    SinglyCL<int> *obj = new SinglyCL<int>();

    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);
    
    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);

    obj->InsertAtPos(75,4);

    obj->Display();
    iRet = obj->Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj->DeleteFirst();
    obj->DeleteLast();
    
    obj->Display();
    iRet = obj->Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj->DeleteAtPos(4);

    obj->Display();
    iRet = obj->Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}