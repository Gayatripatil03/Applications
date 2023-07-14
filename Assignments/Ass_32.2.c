//Write a program which display all pallindrome elements of Singly Linear Linked List.
//Input Linked List : |11|->|28|->|17|->|414|->|6|->|89|
//Output : 11   6   414

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
    if(Head == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }

    printf("Elements of linked list are: \n");

    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

void DisplayPallindrome(PNODE Head)
{
    if(Head == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    
    printf("Pallindrome elements in the Linkd List are :\n");

    while(Head != NULL)
    {
        int iNo = Head->data;
        int iOriginal = iNo;
        int iDigit = 0;
        int iReverse = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse  = (iReverse * 10)+iDigit;
            iNo = iNo / 10; 
        }

        if(iOriginal == iReverse)
        {
            printf("%d\t",iOriginal);
        } 
        
        Head = Head->next;        
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);
    
    DisplayPallindrome(First);

    return 0;
}