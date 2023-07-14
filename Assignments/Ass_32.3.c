//Write a program which display product of all digits of all elements of Singly Linear Linked List.
//(Don't consider 0)
//Input Linked List : |11|->|20|->|32|->|41|
//Output :  1   2   6   4

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

void DisplayProduct(PNODE Head)
{
    printf("Product of all digits of elements in the Linked List are:\n");
    while(Head != NULL)
    {
        int iNo = Head->data;
        int iDigit = 0;
        int iProduct = 1;
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 0)
            {
                iDigit = 1;
            
            }
            iNo = iNo / 10;
            iProduct = iProduct * iDigit;
        }
        Head = Head->next;
        printf("%d\t",iProduct);
    }
    
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    DisplayProduct(First);

    return 0;
}