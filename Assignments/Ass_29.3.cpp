////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which accept one number from user and checks whether 9th or 12th bit is ON or OFF.
//       Input : 257
//       Output : TRUE
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
// Description : This function checks whether the 9th or 12th bit in integer is ON or OFF.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0X00000100;
    UINT iMask2 = 0X00000800;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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
        cout<<"TRUE"<<"\n";
    }
    else
    {
        cout<<"False"<<"\n";
    }

    return 0;
}