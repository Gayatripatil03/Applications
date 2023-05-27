/* 4. Accept N numbers from user and display all such numbers whch contains 3 digits in it.
    Input: N: 6
    Elements: 8225  665 3   76  953 858
    OUTPUT: 665 953 858
*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] <= 999)&&(Arr[iCnt]>=100))
        {
         printf("%d\t",Arr[iCnt]);   
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);    

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }
     printf("Enter %d elemenrts",iSize);

   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {

        printf("Enter element: %d", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }
    
    Digits(ptr, iSize);

    free(ptr);

    return 0;
}