/* 5. Accept N numbers from user and display summation of digits of each number.
   Input: N: 6
   Elements: 8225   665 3   76  953 858
   Output: 17   17  3   13  17  21
*/
#include <stdio.h>
#include <stdlib.h>

int SumOfDigits(int num)
{
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
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

    printf("Sum of digits for each number in the array:\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        int sum = SumOfDigits(ptr[iCnt]);
        printf("Number: %d, Sum of digits: %d\n", ptr[iCnt], sum);
    }

    free(ptr);

    return 0;
}