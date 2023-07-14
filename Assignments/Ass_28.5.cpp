////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which accept one number from user and toggle contents of first and last nibble of the number.
//                    Return modified number.(Nibble is a group of four bits)                  
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;


////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : ToggleBit
// Input : integer
// Output : returns iResult value
// Description : This function toggle the first and last nibble of a number.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0XF000000F;

    UINT iResult = 0;
    
    iResult = iNo ^ iMask;
    return iResult;
}

////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function main
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    //////////////////////////////////////////////////////////////
    // Accepting integer value of number and position from user
    //////////////////////////////////////////////////////////////

    cout<<"Enter number : "<<"\n";
    cin>>iValue;


    ////////////////////////////////////////////////////
    // Passing value to the bussiness logic function
    ///////////////////////////////////////////////////

    iRet = ToggleBit(iValue);

    cout<<"Result is: "<<iRet<<"\n";

    return 0;
}