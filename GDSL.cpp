#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////
//
// Code of Singly Linear
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};

template <class T>
class SinglyLL
{
    private:
        struct nodeSL<T> * First;
        int iCount;

    public:
        SinglyLL();

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
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeSL<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSL<T> * newn = NULL;

    newn = new nodeSL<T>;    // malloc

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

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = First;

    newn = new nodeSL<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSL<T> * newn = NULL;
    int i = 0;
    struct nodeSL<T> * temp;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
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
        
        newn = new nodeSL<T>;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp -> next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
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

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
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
            temp = temp ->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T> * temp1;
    struct nodeSL<T> * temp2;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
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
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }    
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Circular
//
/////////////////////////////////////////////////////////////
template <class T>
struct nodeDC
{
    T data;
    struct nodeDC *next;
    struct nodeDC *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct nodeDC<T> * First;
        struct nodeDC<T> * Last;
        int iCount;

    public:
        DoublyCL();

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
DoublyCL<T>:: DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is emprty\n";
        return;
    }

    cout<<"<=> ";
    do
    {
        cout<<"| "<<First->data <<"| <=> ";
        First = First -> next;
    }while(Last -> next != First);

    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last ->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;    
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDC<T> * temp = NULL;
    struct nodeDC<T> * newn = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalid postion\n";
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
        newn = new nodeDC<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        First = First -> next;
        delete Last->next;
        First -> prev = Last;
        Last -> next = First;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        Last = Last -> prev;
        delete First -> prev;

        Last -> next = First;
        First -> prev = Last;
    }
    iCount--;    
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
    struct nodeDC<T> * temp = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid postion\n";
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
        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }    
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Liear
//
/////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////
//
// Code of Singly Circular
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodeCL 
{
    T data;
    struct nodeCL *next;
};

template <class T>
class SinglyCL
{
    public:
        struct nodeCL<T> * First;
        struct nodeCL<T> * Last;
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
    struct nodeCL<T> * newn = NULL;
    newn = new nodeCL<T>;
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
    struct nodeCL<T> * newn = NULL;
    newn = new nodeCL<T>;
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
        struct nodeCL<T> * newn = NULL;
        struct nodeCL<T> * temp = First;
        for(int i = 1; i<pos-1; i++)
        {
            temp = temp->next;
        }
        newn = new nodeCL<T>;
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
        struct nodeCL<T> * temp = First;
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
        struct nodeCL<T> * temp1 = NULL;
        struct nodeCL<T> * temp2 = First;
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


/////////////////////////////////////////////////////////////
//
// Code of Stack
//
/////////////////////////////////////////////////////////////

// Generic Stack

template <class T>
struct node
{
    T data;
    struct node *next;    
};

template <class T>
class Stack
{
    public:
        int iCount;
        struct node<T> * First;

        Stack();
        void Push(T no);
        T Pop();
        void Display();
        int Count();
};

template <class T>
Stack<T>::Stack()
{
    iCount = 0;
    First = NULL;
}

template <class T>
void Stack<T>::Push(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
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

template <class T>
T Stack<T>::Pop()
{
    struct node<T> * temp = NULL;
    T no;
    if(First == NULL)
    {
        cout<<"Stack is empty \n";
        return -1;
    }
    else if(First->next == NULL)
    {
        no = First->data;
        delete First;
        First = NULL;
    }
    else
    {
        no = First->data;
        temp = First;
        First = First->next;
        delete temp;
    }
    iCount--;
    return no;
}

template <class T>
void Stack<T>::Display()
{
    cout<<"Elements of stack are : \n";
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|\n";
        temp = temp->next;
    }
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}


/////////////////////////////////////////////////////////////
//
// Code of Queue
//
/////////////////////////////////////////////////////////////

// Generic Queue

#include<iostream>
using namespace std;

template <class T>
struct nodeGQ
{
    T data;
    struct nodeGQ *next;    
};

template <class T>
class Queue
{
    public:
        int iCount;
        struct nodeGQ<T> * First;

        Queue();
        void enqueue(T no);
        T dequeue();
        void Display();
        int Count();
};

template <class T>
Queue<T>::Queue()
{
    iCount = 0;
    First = NULL;
}

template <class T>
void Queue<T>::enqueue(T no)
{
    struct nodeGQ<T> * newn = NULL;
    struct nodeGQ<T> * temp = NULL;

    newn = new struct nodeGQ<T>;
    newn->data = no;
    newn->next = NULL;

    if( First == NULL)
    {
        First = newn;
    }
    else
    {
        temp =  First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
T Queue<T>::dequeue()
{
    struct nodeGQ<T> * temp = NULL;
    T no;
    if( First == NULL)
    {
        cout<<"Queue is empty \n";
        return -1;
    }
    else if( First->next == NULL)
    {
        no =  First->data;
        delete  First;
        First = NULL;
    }
    else
    {
        no =  First->data;
        temp =  First;
        First =  First->next;
        delete temp;
    }
    iCount--;
    return no;
}

template <class T>
void Queue<T>::Display()
{
    cout<<"Elements of queue are : \n";
    struct nodeGQ<T> * temp =  First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|\n";
        temp = temp->next;
    }
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}


int main()
{
    // LL of integer
    cout<<"-------------- LinkdList of Integers --------------\n";

    SinglyLL<int> *iobj = new SinglyLL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);
    
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertAtPos(105,5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteAtPos(5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    // LL of character
    cout<<"-------------- LinkdList of Chracters --------------\n";

    DoublyCL<char> *cobj = new DoublyCL<char>();

    cobj->InsertFirst('D');
    cobj->InsertFirst('F');
    cobj->InsertFirst('R');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertLast('E');
    cobj->InsertLast('Y');
    cobj->InsertLast('U');
    
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertAtPos('W',5);

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->DeleteAtPos(5);
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    // LL of float
    cout<<"-------------- LinkdList of Floats --------------\n";

    DoublyLL<float> *fobj = new DoublyLL<float>();

    fobj->InsertFirst(90.78f);
    fobj->InsertFirst(78.99f);
    fobj->InsertFirst(67.99f);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertLast(45.67f);
    fobj->InsertLast(54.78f);
    fobj->InsertLast(77.89f);
    
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertAtPos(88.56,5);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->DeleteAtPos(5);
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    // LL of double

    cout<<"-------------- LinkdList of Doubles --------------\n";

    SinglyCL<double> *dobj = new SinglyCL<double>();

    dobj->InsertFirst(90.78978);
    dobj->InsertFirst(78.99645);
    dobj->InsertFirst(67.9934);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->InsertLast(45.67867);
    dobj->InsertLast(54.78534);
    dobj->InsertLast(77.89324);
    
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->InsertAtPos(88.56987,5);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->DeleteAtPos(5);
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    //CL of double

    cout<<"-------------- LinkdList of Integers --------------\n";

    DoublyCL<int> *aobj = new DoublyCL<int>();

    aobj->InsertFirst(51);
    aobj->InsertFirst(21);
    aobj->InsertFirst(11);
    
    aobj->InsertLast(101);
    aobj->InsertLast(111);
    aobj->InsertLast(121);
    
    aobj->Display();
    iRet = aobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    aobj->InsertAtPos(15,5);

    aobj->Display();
    iRet = aobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    aobj->DeleteAtPos(5);
    aobj->Display();
    iRet = aobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    // LL of character
    cout<<"-------------- LinkdList of Chracters --------------\n";

    SinglyLL<char> *pobj = new SinglyLL<char>();

    pobj->InsertFirst('D');
    pobj->InsertFirst('F');
    pobj->InsertFirst('R');

    pobj->Display();
    iRet = pobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    pobj->InsertLast('E');
    pobj->InsertLast('Y');
    pobj->InsertLast('U');
    
    pobj->Display();
    iRet = pobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    pobj->InsertAtPos('W',5);

    pobj->Display();
    iRet = pobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    pobj->DeleteAtPos(5);
    pobj->Display();
    iRet = pobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;



    return 0;
}