#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE Root, int No)
{   
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Root == NULL)   // Tree is empty
    {
        *Root = newn;
    }
    else    // Tree contains atleast one node
    {
        temp = *Root;

        while(1) //unconditional loop
        {
            if(temp->data == No)
            {
                printf("Unable to insert node as element is already present\n");
                free(newn);
                break;
            }
            else if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp -> rchild;
            }
            else if(No < temp -> data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp -> lchild;
            }
        }
    }
}

int main()
{
    PNODE Head = NULL;

    Insert(&Head,21);
    Insert(&Head,11);
    Insert(&Head,51);
    
    return 0;
}