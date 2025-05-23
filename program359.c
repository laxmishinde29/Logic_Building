#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;  //$
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE First)
{
    printf("\nNULL <=> ");
    while(First != NULL)
    {
        printf("| %d | <=> ",First->data);
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

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  // $

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First) -> prev = newn;    // $

        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  // $

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
        newn->prev = temp;      // $
    }
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
    int iLength = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(First, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;  // $

        temp = *First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;    // $
        temp->next = newn;
        newn->prev = temp;          // $
    }
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)  // Case 1
    {
        printf("Unable to delte the node as LL is empty\n");
        return;
    }
    else if((*First)->next == NULL) // Case 2
    {
        free(*First);
        *First = NULL;
    }
    else    // Case 3
    {
       *First = (*First) ->next;
       free((*First)-> prev);        // $
       (*First)->prev = NULL;       // $
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)  // Case 1
    {
        printf("Unable to delte the node as LL is empty\n");
        return;
    }
    else if((*First)->next == NULL) // Case 2
    {
        free(*First);
        *First = NULL;
    }
    else    // Case 3
    {
        temp = *First;

        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE First, int iPos)
{}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    InsertLast(&Head,5);
    InsertLast(&Head,18);
    InsertLast(&Head,3);
    
    InsertAtPos(&Head,11,5);

    Display(Head);

    iRet = Count(Head);

    return 0;
}