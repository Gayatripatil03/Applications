// WAP which return smallest element from Singly Linear Linked List.
// Input linked list : |110|->|230|->|20|->|240|->|640|
// Output : 20

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

int Minimum(PNODE Head)
{
    int iMin = 0;

    if(Head == NULL)
    {
        return -1;
    }

    iMin = Head -> data;
    
    while(Head != NULL)
    {
        if(Head -> data < iMin)
        {
            iMin = Head->data;
        }
        Head = Head -> next;
    }
    return iMin;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet = Minimum(First);
    printf("Smallest element is : %d\n",iRet);
    
    return 0;
}