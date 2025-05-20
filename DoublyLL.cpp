//Doubly Linear link list
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

};

DoublyLL::DoublyLL()
{
    cout<<"Inside Constructor \n";
    First = NULL;
    iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = First;

    cout<<"NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=>";
        temp = temp -> next;
    }
    cout<<" NULL"<<"\n";
}

int DoublyLL::Count()
{
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

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

void DoublyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

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

void DoublyLL::InsertAtPos(int No, int iPos)
{
    PNODE newn = NULL;
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
        PNODE temp = First;

        newn = new NODE;
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

void DoublyLL::DeleteFirst()
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
        PNODE temp = First;

        First = First -> next;
        delete (First->prev);   //  #
        First -> prev = NULL;   //  #
    }
    iCount--;
}

void DoublyLL::DeleteLast()
{
    PNODE temp = First;

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
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        delete (temp->next);
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp1;
    PNODE temp2;

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
        PNODE temp = First;
        PNODE newn = NULL;

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
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.InsertAtPos(55,4);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    
    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    
    return 0;
}