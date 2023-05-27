/* 5. Accept N numbers from user and accept one another number as NO,return frequency of No from it.
    Input: N: 6
     NO: 66
     Elements: 85   66  3   66  93  88
     Output:  2

     Input:  N:  6
     NO:  12
     Elements; 85   11  3   15  11  111
     Output: 0
*/
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter the elementyou want to find: \t");
    scanf("%d",&iValue);

    iRet = Frequency(ptr, iSize,iValue);

    printf("Frequency is:  %d", iRet);

    free(ptr);

    return 0;
}