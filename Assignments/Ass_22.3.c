/*3.Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
   Input: "MarvellouS"
   Output: 6  (8-2)
*/
#include<stdio.h>
int Difference(char *str)
{
    int iCntS = 0;
    int iCntC = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCntS++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntC++;
        }
        str++;
    }
    return iCntS - iCntC;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference is: %d",iRet);

    return 0;
}