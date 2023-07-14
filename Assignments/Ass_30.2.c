// WAP which search last occurrence of particular element from singly linear linked list.
// Input linked list : | 10 | -> | 20 | -> | 30 | -> | 40 | -> | 50 | -> | 30 | -> | 70 | 
// Input element : 30
// Output : 6

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
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int SearchLastOcc(PNODE Head, int no)
{
    int iCnt = 1;
    int iPos = 0;

    while(Head != NULL)
    {
        if(Head->data == no)
        {
            iPos = iCnt;
        }
        Head = Head -> next;
        iCnt++;
    
    }

    return iPos;
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

    iRet = SearchLastOcc(First,30);
    printf("The last occurrence position of number is: %d\n",iRet);


    return 0;
}