//WAP which returns addition of all even elements from singly linear linked list.
// Input Linked List : |11|->|20|->|32|->|41|
// Output : 52

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

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if(((Head->data) % 2) == 0)
        {
            iSum = iSum + (Head->data);
        }
        Head = Head -> next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet = Addition(First);
    printf("Addition is : %d\n",iRet);
    
    return 0;
}