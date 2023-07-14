////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which acceept one number and position from user and check whether 
//                    bit at that position is on or off. If bit is one return TRUE otherwise return FALSE.                    
//                    Input : 10   2
//                    Output : TRUE
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
// Description : This function checks whether the bit at a particular position is ON or OFF.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }

    iMask = iMask << (iPos-1);

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
    UINT iBit = 0;

    //////////////////////////////////////////////////////////////
    // Accepting integer value of number and position from user
    //////////////////////////////////////////////////////////////

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter position: "<<"\n";
    cin>>iBit;


    ////////////////////////////////////////////////////
    // Passing value to the bussiness logic function
    ///////////////////////////////////////////////////

    bRet = ChkBit(iValue,iBit);

    if(bRet == true)
    {
        cout<<"TRUE"<<"\n";
    }
    else
    {
        cout<<"FALSE"<<"\n";
    }

    return 0;
}