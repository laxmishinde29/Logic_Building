#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private:
        PNODE First;
        int iCount;
    
    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()  //singlyLL navachya class madhla maza singlyll constructor ahe (read)
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

void SinglyCL::Display()
{
    PNODE temp = First;

    do
    {
        cout<<"|"<<First->data<<"|";
        First = First->next;
    }while(First != temp->next);

    cout<<"\n";
    
}

int SinglyCL::Count()
{
    return iCount;
}

void SinglyCL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyCL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = First;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while(temp->next != First)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn ->next = First;
    }
    iCount++;
}

void SinglyCL::InsertAtPos(int No, int iPos)
{
    PNODE newn = NULL;
    int i = 0;
    PNODE temp;

    if((iPos < 1) || (iPos >iCount+1))
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
        temp = First;

        newn = new NODE;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

void SinglyCL::DeleteFirst()
{
    PNODE temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty \n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete temp;
    }
    iCount--;
}

void SinglyCL::DeleteLast()
{
    PNODE temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty \n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp -> next;
        temp ->next = NULL;
    }
    iCount--;
}

void SinglyCL::DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp1;
    PNODE temp2;

    if((iPos < 1) || (iPos >iCount))
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
        temp1 = First;

        for(i = 1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

int main()
{
    SinglyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;
 
    obj.DeleteFirst();    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    obj.DeleteLast();    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    obj.InsertAtPos(105,3);    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    obj.DeleteAtPos(3);    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    return 0;
}