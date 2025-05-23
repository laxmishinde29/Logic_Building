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
        PNODE Last;
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

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCL::Display()
{}

int SinglyCL::Count()
{}

void SinglyCL::InsertFirst(int No)
{}

void SinglyCL::InsertLast(int No)
{}

void SinglyCL::InsertAtPos(int No, int iPos)
{}

void SinglyCL::DeleteFirst()
{}

void SinglyCL::DeleteLast()
{}

void SinglyCL::DeleteAtPos(int iPos)
{}

int main()
{
    SinglyCL obj;



    return 0;
}
