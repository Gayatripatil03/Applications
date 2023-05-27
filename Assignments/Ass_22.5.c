/*5.Write a program which accept string fron user and display it in reverse order.
  Input: "MarvellouS"
  Output: "SuollevraM"
*/

#include<stdio.h>

void Reverse(char *str)
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

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr); 

    printf("String after reverse is: %s\n",arr);

    return 0;
}