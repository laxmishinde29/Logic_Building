#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();
        void EnQueue(int No);  // InsertLast()
        int DeQueue();   // DeleteLast()
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue ::Display()
{
    cout<<"Elements of Enqueu are : \n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp -> next;
    }
    cout<<"\n";
}

int Queue ::Count()
{
    return iCount;
}

void Queue ::EnQueue(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;
    
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp-> next != NULL)
        {
            temp = temp ->next;
        }

        temp->next = newn;
    }
    iCount++;
}

int Queue ::DeQueue()
{
    int iValue = 0;
    PNODE temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Queue is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First -> data;
        First = First -> next;
        delete temp;
        
        iCount--;
    }

    return iValue;
}

int main()
{
    Queue obj;
    int iChoice = 0;
    int iNo = 0;

    cout<<"--------------------- Implementation of Queue ---------------------\n";
    while(iChoice != 5)
    {
        cout<<"Please select your choice: \n";
        cout<<"1 : Insert new element in Queue\n";
        cout<<"2 : Remove the element from Queue\n";
        cout<<"3 : Display the elements form Queue\n";
        cout<<"4 : Count number of elements in Queue\n";
        cout<<"5 : Exit\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter Number that you want to Insert : \n";
                cin>>iNo;
                obj.EnQueue(iNo);
            break;

            case 2:
                iNo = obj.DeQueue();
                if(iNo != -1)
                {
                    cout<<"Removed element from Queue is : "<<iNo<<"\n";
                }
            break;
            
            case 3:
                obj.Display();
            break;

            case 4:
                iNo = obj.Count();
                cout<<"Number of Elements in the Queue are : "<<iNo<<"\n";
            break;

            case 5:
                cout<<"Thank you for using our application\n";
            break;
        }
    }
    return 0;
}







/*
int main()
{
    Queue obj;
    int iRet = 0;

    obj.EnQueue(10);
    obj.EnQueue(20);
    obj.EnQueue(30);
    obj.EnQueue(40);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in the Queue are : "<<iRet<<"\n";

    iRet = obj.DeQueue();

    cout<<"Remove element is :"<<iRet<<"\n";

    iRet = obj.DeQueue();

    cout<<"Remove element is :"<<iRet<<"\n";

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements in the Queue are : "<<iRet<<"\n";

    obj.EnQueue(50);

    obj.Display();

    iRet = obj.Count();

    cout<<"Number of elements in the Queue are : "<<iRet<<"\n";


    return 0;
}
    */