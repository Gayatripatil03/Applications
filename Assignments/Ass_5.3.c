//Write a program which accept number from user and print its number line.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d ",- iCnt);
    }
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        printf("  %d",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}