//Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int iSumF = 0;
    int iSumNF = 0;


    for(iCnt = 1;iCnt < iNo;iCnt++)  //O(N)
    {  
        if((iNo%iCnt)==0)
        {
            iSumF = iSumF + iCnt; 
        }    
        else
        {
            iSumNF = iSumNF +iCnt;
        }
    }
    return iSumF - iSumNF;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}