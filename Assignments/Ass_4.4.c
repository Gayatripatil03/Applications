//Write a program which accept three numbers and print its multiplication.
#include<stdio.h>
int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iRes = 0;
    if((iNo1 ||iNo2 ||iNo3) ==0)
    {
        return 0;
    }
        iRes =  iNo1 * iNo2 * iNo3;
    return iRes;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 =0,iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is: %d",iRet);
    return 0;
}