/*  5.Write a program which accept string from user reverse that string in place.
    Input: "abcd"
    Output: "dcba"
    Input:  "abba"
    Output: "abba"
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
       temp = *start;
       *start = *end;
       *end = temp;

       start++;
       end--; 
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Reverse string is : %s\n",arr);

    return 0;
}
