#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}   

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 

int Addition(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        iSum = iSum + (First->data);
        First = First -> next;
    }

    return iSum;
}

int EvenCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First->data)% 2 == 0)
        {
            iCount++;
        }
        First = First -> next;
    }

    return iCount;
}

int OddCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First->data)% 2 == 1)
        {
            iCount++;
        }
        First = First -> next;
    }

    return iCount;
}

int Frequency(PNODE First, int No)
{
    int iCount = 0;

    while(First != NULL)
    {
        if(First -> data == No)
        {
            iCount++;
        }
        First = First -> next;
    }

    return iCount;
}

bool Search(PNODE First, int No)
{
    bool bFlag = false;

    while(First != NULL)
    {
        if(First->data == No)
        {
            bFlag = true;
            break;
        }
        First = First->next;
    }
    return bFlag;
}

int SearchFirstOccurance(PNODE First, int No)
{
    int iCount = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First ->data == No)
        {
            iPos = iCount;
            break;
        }
        iCount++;
        First = First -> next;
    }

   return iPos;
}

int SearchLastOccurance(PNODE First, int No)
{
    int iCount = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First ->data == No)
        {
            iPos = iCount;
        }
        iCount++;
        First = First -> next;
    }

   return iPos;
}

void SumDigits(PNODE First)
{
    int iSum = 0;
    int iNo = 0;
    int iDigit = 0;

    while(First != NULL)
    {
        iNo = First -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\n",iSum);
        iSum = 0;

        First = First -> next;
    }
}

int FactorsAddition(int iNo)
{
    int iSum = 0, i = 0;

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

bool CheckPerfect(int iNo)
{
    int iSum = 0, i = 0;

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iSum = iSum + i;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First->data) == true)
        {
            printf("Perfect number from LL is : %d\n",First->data);
        }
        First = First -> next;
    }
}

void SumFactors(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\n",FactorsAddition(First->data));
        First = First -> next;
    }
}

int MiddleElement(PNODE First)
{
    int iCnt = 0;
    PNODE temp = First;
    int iPos = 0, i = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }

    iPos = iCnt / 2;

    for(i = 1;i <= iPos; i++)
    {
        First = First -> next;
    }

    return First->data;
}

int MiddleElementX(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;

    while((Teacher != NULL) && (Teacher -> next != NULL))
    {
        Teacher = Teacher -> next->next;
        Student = Student -> next;
    }

    return (Student->data);
}

bool CheckLoop(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;
    bool bFlag = false;

    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Teacher = Teacher->next->next;

        if(Teacher == Student)
        {
            bFlag = true;
            break;
        }
        
        Student = Student->next;

        if(Teacher == Student)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    PNODE Head = NULL;

    bool bRet = false;

    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);
    InsertFirst(&Head,21);

    bRet = CheckLoop(Head);

    if(bRet == true)
    {
        printf("Loop detected...\n");
    }
    else
    {
        printf("There is no loop in the Linked List\n");
    }

    return 0;
}
