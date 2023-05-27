//Write a rogram which accept number from user and display all its non factors.

#include<stdio.h>
int NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt= 1;iCnt <= iNo; iCnt++)  //O(N)
    {
        if((iNo%iCnt)!=0)
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

    NonFact(iValue);

    return 0;
}