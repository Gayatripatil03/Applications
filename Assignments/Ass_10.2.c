/* 2. Accept N numbers from user and return difference between frequency of even numbers and odd numbers.
    Input: N:  7
    Elements: 85    66  3   80  93  88  90
    Outut:  1 (4-3)
*/
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequencyOdd = 0;
    int iFrequencyEven = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFrequencyEven++;
        }
        else
        {
            iFrequencyOdd++;
        }
    }
    
    int iFrequency = iFrequencyEven - iFrequencyOdd;

    return iFrequency;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    iRet = Frequency(ptr, iSize);
    printf("Result is %d\n", iRet);

    free(ptr);

    return 0;
}