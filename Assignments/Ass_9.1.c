/* 1. Accept N numbers from user and return difference between summation of even eleents and summation of odd elements.
   Input: N:   6
   Elements: 85 66  3   80  93  88
   Output:  53  (234 - 181)
*/
#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEven += Arr[iCnt];
        }
        else
        {
            iOdd += Arr[iCnt];
        }
    }

    int iDifference = iEven - iOdd;
    return iDifference;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    int result = Difference(ptr, iSize);
    printf("Difference is: %d\n", result);

    free(ptr);

    return 0;
}