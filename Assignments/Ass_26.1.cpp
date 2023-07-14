////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which checks whether 15th bit is ON or OFF.
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : ChkBit
// Input : integer
// Output : returns boolean value
// Description : This function checks whether the 15th bit in integer is ON or OFF.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X4000;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function main
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    BOOL bRet = false;

    //////////////////////////////////////////////////
    // Accepting integer value fro user
    /////////////////////////////////////////////////

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    ////////////////////////////////////////////////////
    // Passing value to the bussiness logic function
    ///////////////////////////////////////////////////

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"15th bit is ON"<<"\n";
    }
    else
    {
        cout<<"15th bit is OFF"<<"\n";
    }

    return 0;
}