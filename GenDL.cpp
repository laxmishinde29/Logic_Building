//doubly liner linklist
#include<iostream>
using namespace std;

template <class T>
struct nodeDL
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct nodeDL <T> * First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

};

template <class T>
DoublyLL <T>::DoublyLL()
{
    cout<<"Inside Constructor \n";
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL <T>::Display()
{
    struct nodeDL <T> * temp = First;

    cout<<"NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=>";
        temp = temp -> next;
    }
    cout<<" NULL"<<"\n";
}

template <class T>
int DoublyLL <T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL <T>::InsertFirst(T No)
{
    struct nodeDL <T> * newn = NULL;

    newn = new nodeDL<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = First;
        First-> prev = newn;

        First = newn;
    }
    iCount++;
}

template <class T>
void DoublyLL <T>::InsertLast(T No)
{
    struct nodeDL <T> * newn = NULL;
    struct nodeDL <T> * temp = NULL;

    newn = new nodeDL<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;

}

template <class T>
void DoublyLL <T>::InsertAtPos(T No, int iPos)
{
    struct nodeDL <T> * newn = NULL;
    int i = 0;

    if((iPos <1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeDL <T> * temp = First;

        newn = new nodeDL<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iCount-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void DoublyLL <T>::DeleteFirst()
{
    if(First == NULL)           // Empty LL
    {
        return;
    }
    else if(First->next == NULL)    // Single node in LL
    {
        delete First;       // free(First);
        First = NULL;
    }
    else        // More than one node in LL
    {
        struct nodeDL <T> * temp = First;

        First = First -> next;
        delete (First->prev);   //  #
        First -> prev = NULL;   //  #
    }
    iCount--;
}

template <class T>
void DoublyLL <T>::DeleteLast()
{
    struct nodeDL <T> *temp = First;

    if(First == NULL)           // Empty LL
    {
        return;
    }
    else if(First->next == NULL)    // Single node in LL
    {
        delete First;       // free(First);
        First = NULL;
    }
    else
    {
        struct nodeDL <T> * temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        delete (temp->next);
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL <T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeDL <T> * temp1;
    struct nodeDL <T> * temp2;

    if((iPos <1) || (iPos > iCount))
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeDL <T> * temp = First;
        struct nodeDL <T> * newn = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        temp -> next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;

        delete temp2;

    }
    iCount--;
}

int main()
{
    DoublyLL <int> * obj = new DoublyLL<int>();
    int iRet = 0;

    obj->InsertFirst(101);
    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertLast(11);
    obj->InsertLast(111);
    obj->InsertLast(121);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj->DeleteFirst();
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj->DeleteLast();
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj->InsertAtPos(55,4);
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    
    obj->DeleteAtPos(4);
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    
    return 0;
}