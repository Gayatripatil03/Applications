/* 1. Accept N numbers from user and accept one number as NO,check whether No is present or not.
   Input:  N: 6
   NO:  66
   Elements are: 85 66  3   66  93  88
   Otput: TRUE
   
   Input: 6
   NO:  12
   Elements are: 85 11  3   15  11  111
   Otput: TRUE
*/
#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the number that you want to check: ");
    scanf("%d",&iValue);

    bRet = Check(ptr, iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    free(ptr);

    return 0;
}