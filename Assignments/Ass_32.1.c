//Write a program which reverse each element of Singly Linear Linked List.
//Input Linked List : |11|->|28|->|17|->|41|->|6|->|89|
//Output : |11|->|82|->|71|->|14|->|6|->|98|

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of linked list are: \n");

    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

void Reverse(PNODE Head)
{
    printf("Reverse elements in the Linked List are:\n");
    while(Head != NULL)
    {
        int iNo = Head->data;
        int iDigit = 0;
        int iReverse = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse  = (iReverse * 10)+iDigit;
            iNo = iNo / 10;   
        }
        Head = Head->next;
        printf("|%d| -> ",iReverse);
    }
    
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);
    
    
    Reverse(First);

    return 0;
}