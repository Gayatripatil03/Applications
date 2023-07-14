//Write a program which display smallest digit of all elements of Singly Linear Linked List.
//Input Linked List : |11|->|250|->|532|->|415|
//Output : 1    0   2   1

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

void DisplaySmall(PNODE Head)
{
    if(Head == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    
    printf("Small digit of elements in the Linkd List are :\n");

    while(Head != NULL)
    {
        int iNo = Head->data;
        int iDigit = 0;
        int iSmall = iNo % 10;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;   
        }
        printf("%d\t",iSmall);
        Head = Head->next;        
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,415);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);
    
    DisplaySmall(First);

    return 0;
}