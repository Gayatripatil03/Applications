//WAP which display addition of digits of elements from singly linear linked list.
// Input Linked List : |110|->|230|->|20|->|240|->|640|
// Output : 2   5   2   6   10

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         // 1

    newn->data = no;                            // 2
    newn->next = NULL;

    if(*Head == NULL)                           // 3
    {
        *Head = newn;                           // 4
    }
    else
    {
        newn->next = *Head;                     // 5
        *Head = newn;                           // 6
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

void SumDigit(PNODE Head)
{
    int iSum = 0;
    int iDigit = 0;

    printf("Digit Sum are: ");
    while(Head != NULL)
    {
        while((Head->data) != 0)
        {
            iDigit = (Head->data) % 10;
            Head->data = (Head->data) / 10; 
            iSum = iSum + iDigit;            
        }
        printf("%d\t",iSum);
        iSum = 0;
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    SumDigit(First);

    return 0;
}