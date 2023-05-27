//Write a program which accept the number from the user and return the difference between summation of even digits and summation of odd digits.
/* Input:   2395
   Output:   -15  (2-17)
   Input:   1018
   Output:  6  (8-2)
   Input:   8440
   Output:  16  (16-0)
   Input:   5733
   Output:  -18  (0-18)
*/
#include<stdio.h>

int CountDiff(int iNo)
{
    int iSumE = 0;
    int iSumO = 0;
    int iDigit = 0;
    int iRem =0;
    int iDiff = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;
        iRem = iDigit % 2;

        if(iRem == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        
    } 
    iDiff =  iSumE - iSumO;
    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);
    
    return 0;

}