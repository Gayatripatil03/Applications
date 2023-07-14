/* 4. Write a program which accept string from user and accept one character.
      Return index of last occurrence of that character.
      Input: "Marvellous Multi OS"
              M
      Output: 11
      Input: "Marvellous Multi OS"
              W
      Output: -1
      Input: "Marvellous Multi OS"
             e
      Output: 4 
*/
#include <stdio.h>
#include <string.h>

int FirstChar(char *str, char ch)
{
    int index = -1;
    int length = strlen(str);
    
    for (int i = length - 1; i >= 0; i--)
    {
        if (str[i] == ch)
        {
            index = i;
            break;
        }
    }
    
    return index;
}

int main()
{
    char str[20];
    char cValue = '\0';
    int  iRet =0; 

    printf("Enter  string: ");
    scanf("%[^\n]s", str);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(str, cValue);

    printf("Character location is: %d\n", iRet);

    return 0;
}
