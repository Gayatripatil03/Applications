//WAP which displays all elements which are perfect number from Singly linear Linked List.
// Input Linked List : |11|->|28|->|17|->|41|->|22|->|89|
// Output :  6  28

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

void DisplayPerfect(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iCnt = 0;

    printf("Perfect elements from Linked List are:\t");
    while(Head != NULL)
    {
        iNo = Head->data;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == iNo)
        {
            printf("%d\t",iNo);
        }

        iSum = 0;
        Head = Head -> next;
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

    DisplayPerfect(First);
    
    return 0;
}