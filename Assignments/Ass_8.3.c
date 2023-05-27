//Write a program which accept the number from the user and return the count of digits in between 3 and 7.
/* Input:   2395
   Output:  1
   Input:   1018
   Output:  0
   Input:   4521
   Output:  2
   Input:   9922
   Output:  0
*/
#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit <7 )
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d\n",iRet);

    return 0;
}
