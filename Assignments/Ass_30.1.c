// WAP which search first occurrence of particular element from singly linear linked list
// Input linked list : | 10 | -> | 20 | -> | 30 | -> | 40 | -> | 50 | -> | 30 | -> | 70 | 
// Input element : 30
// Output : 3

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data=no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
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

int SearchFirstOcc(PNODE Head, int no)
{
    int iCnt = 1;

    while(Head -> data != no)
    {
        Head = Head -> next;
        iCnt++;
    }

    return iCnt;
} 

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    
    Display(First);

    iRet = SearchFirstOcc(First,30);
    printf("The first occurrence position of number is: %d\n",iRet);

    return 0;
}