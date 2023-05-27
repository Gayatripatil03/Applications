//Program which accept number from user and chech whether it contains 0 in it or not.
/*Input:    2395
  Output:   There is no Zero
  Input:    1018
  Output:   It Contains 0
  Input:    9000
  Output:   It Contains 0
  Input:    10687
  Output:   It Contains 0
  */
#include <stdio.h>
#include <stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0) {
        iDigit = iNo % 10;
        if (iDigit == 0) {
            return true;  
        }
        iNo = iNo / 10;
    }

    return false;  
}

int main()
{
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%d", &iValue1);

    bRet = CheckZero(iValue1);

    if (bRet == true) {
        printf("it contain zero.\n");
    } else {
        printf("there is no zero.\n");
    }

    return 0;
}