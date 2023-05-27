// Write a program which accept total marks and obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(float iNo1,float iNo2)
{
    float iRes = 0.0;
    if((iNo1||iNo2)==0.0)
    {
        printf("Please enter positive input");
    } 
    else
    { 
        iRes = (iNo2/iNo1)*100;
    }
    return iRes;
}
int main()
{
    float iValue1 = 0.0 ,iValue2=0.0,fRet = 0.0;

    printf("Please enter total marks");
    scanf("%f",&iValue1);

    printf("Please enter obtained marks");
    scanf("%f",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is: : %.2f%%\n",fRet);
    return 0;

}