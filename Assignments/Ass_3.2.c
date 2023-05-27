//Write a program which accept number from user and display its factors in descending order.

#include<stdio.h>
int FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt=(iNo/2);iCnt >= 1; iCnt--)  //O(N/2)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}