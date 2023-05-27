// Writa program which accept one number from user and check whether that number is greater than 100 or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    if(iNo>100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;
   printf("Please enter number");
   scanf("%d",&iValue);

   bRet = CheckGreater(iValue);
   if(bRet == TRUE)
   {
       printf("Greater");
   } 
   else
   {
       printf("Smalller");
   }
   return 0;
    
}