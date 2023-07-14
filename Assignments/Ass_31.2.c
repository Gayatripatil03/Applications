//WAP which displays all elements which are prime from Singly linear Linked List.
// Input Linked List :| 11 | -> | 20 | -> | 17 | -> | 41 | -> | 22 | -> | 89 |
// Output :  11 17  41  89

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

int Prime(int num)
{
    int iCnt = 0;

    if(num <= 1)
    {
        return 0; //Not a prime number
    }

    for(iCnt = 2; iCnt<num/2; iCnt++)
    {
        if((num % iCnt) == 0)
        {
            return 0; //Not a prime number
        }
    }

    return 1;
}

void DisplayPrime(PNODE Head)
{
    if(Head == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    
    printf("Prime Elements in LinkedList are : \n");

    while(Head != NULL)
    {
        if(Prime(Head->data))
        {
            printf("%d \t",Head->data);
        }
        
        Head = Head -> next;
    }
}


int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    DisplayPrime(First);
    
    return 0;
}