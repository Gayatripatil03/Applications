////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which accept one number from user and range of position from user.
//                    Toggle all bits from that range.
//       Input : 897    9    13
//               Toggle all bits from position 9 to 13 of input number ie 879.
//       Output : TRUE
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : ToggleBitRange
// Input : integer
// Output : returns boolean value
// Description : This function checks whether bit at particular two position is ON or OFF.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBitRange(UINT iNo,UINT iStart,UINT iEnd)
{
    UINT iMask1 = 0X0000000F;
    UINT iMask2 = 0XF0000000;
    UINT iMask3 = 0X00000000;
    UINT iMiddle = 0;
    UINT iResult = 0;

    if(((iStart < 1) || (iStart > 32)) || ((iEnd < 1) || (iEnd > 32)))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }

    iMask1 = iMask1 << (iStart-1); 
    iMiddle = 32-iEnd;
    iMask2 = iMask2 >> (iMiddle);
    iMask3 = iMask1 | iMask2;

    iResult = iNo ^ iMask3;

    return iResult;
}
////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function main
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    UINT iRet = false;
    UINT iBit1 = 0;
    UINT iBit2 = 0;

    //////////////////////////////////////////////////////////////
    // Accepting integer value of number and position from user
    //////////////////////////////////////////////////////////////

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter first position: "<<"\n";
    cin>>iBit1;

    cout<<"Enter first position: "<<"\n";
    cin>>iBit2;


    ////////////////////////////////////////////////////
    // Passing value to the bussiness logic function
    ///////////////////////////////////////////////////

    iRet = ToggleBitRange(iValue,iBit1,iBit2);

    cout<<"The modified number is "<<iRet<<"\n";

    return 0;
}