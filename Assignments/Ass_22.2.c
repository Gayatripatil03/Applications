/*2. Write aprogram which accept string from user and count number of small characters.
  Input:  "Marvellous"
  Output:  9
*/
#include<stdio.h>


int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Count of small letters is: %d",iRet);

    return 0;
}