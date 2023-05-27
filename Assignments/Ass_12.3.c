/* 3. Accept N numbers from user and return the difference between largest and smallest number.
    Input: N: 6
    Elements: 85    66  3   66  93  88
    Output:  90 (93-3)
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    int iDifference = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        else if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

    }
    iDifference = iMax - iMin;
    return iDifference;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);    

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Difference(ptr, iSize);
    printf("Difference is: %d\n", iRet);

    free(ptr);

    return 0;
}