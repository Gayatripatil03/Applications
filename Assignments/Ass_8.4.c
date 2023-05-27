//Write a program which accept the number from the user and return the multiplication of all digits.
/* Input:   2395
   Output:  270
   Input:   1018
   Output:  0
   Input:   9440
   Output:  0
   Input:   922432
   Output:  864
*/
#include<stdio.h>

int MultDigits(int iNo)
{
    int iMult = 1;
    while(iNo !=0)
    {
        int iDigit =  iNo % 10;
        iMult = iMult*iDigit;

        iNo /=10;

    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);
    
    return 0;

}