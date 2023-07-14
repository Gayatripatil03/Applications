////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which accept one number and position from user and on that bit.
//                    Return modified number.                   
//                    Input : 10   3
//                    Output : 14
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;


////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : OnBit
// Input : integer
// Output : returns iResult value
// Description : This function On bit at a particular position in a number.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

UINT OnBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    
    iResult = iNo | iMask;
    return iResult;
}

////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function main
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
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

    iRet = OnBit(iValue,iBit);

    cout<<"Result is: "<<iRet<<"\n";

    return 0;
}