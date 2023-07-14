// WAP which return second maximum element from Singly Linear Linked List.
// Input linked list : |110|->|230|->|320|->|240|
// Output : 240
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

int SecMaximum(PNODE Head)
{   int iMax1 = Head->data;
    int iMax2 = 0;

    if(Head == NULL)
    {
        return -1;
    }

    while(Head != NULL)
    {
        if(Head -> data > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = Head->data;
        }
        else if(Head->data >= iMax2)
        {
            iMax2 = Head->data;
        }

        Head = Head -> next;
    }
    return iMax2;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet = SecMaximum(First);
    printf("Second maximum element is : %d\n",iRet);
    
    return 0;
}