/* 2. Accept N numbers from user and accept one another number as NO, return index of first occurrence of that NO.
Input:  N:  6
NO:  66
Elements: 85    66  3   66  93  88
Output: 1

Input: 6
NO: 12
Elements: 85    11  3   15  11  111
Output: -1
*/
#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *ptr = NULL;

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

    iRet = FirstOcc(ptr,iSize, iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("First occurrence of number is: %d\n",iRet);
    }
 
    free(ptr);

    return 0;
}