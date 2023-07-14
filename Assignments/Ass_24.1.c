/* 1. Write a program which accept string from user and accept one character.
      Check whether that character is present in string or not.
      Input: "Marvellous Multi OS"
              e
      Output: TRUE
      Input: "Marvellous Multi OS"
              W
      Output: FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkChar(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

    printf("Enter the character : \n");
    scanf(" %c",&cValue);        

    bRet = ChkChar(Arr,cValue);  

    if(bRet == TRUE)
    {
        printf("Character found");
    }  
    else
    {
        printf("character not found");
    }
    

    return 0;
}