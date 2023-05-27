/*3. Write a program which accept string from user ang toggle the case.
Input: "Marvellous Mlti OS"
Output: mARVELLOUS mULTI os
*/

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is: %s",arr);

    return 0;
}