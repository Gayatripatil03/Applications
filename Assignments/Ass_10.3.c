/* 3. Accept N numbers from user check whether that numbers contains 11 in it or not.
    Input: N: 6
    Elements: 85  66  11  80  93  88
    Output:  11 is present.

    Input: N: 6
    Elements: 85   66  3   80  93  88
    Output: 11 is absent.  
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    bRet = Check(ptr, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
    free(ptr);

    return 0;
}