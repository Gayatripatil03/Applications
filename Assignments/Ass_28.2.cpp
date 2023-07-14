////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which acceept one number and position from user and off that bit.
//                    Return modified number.                   
//                    Input : 10   2
//                    Output : 8
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;


////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : OffBit
// Input : integer
// Output : returns iResult value
// Description : This function OFF bit at a particular position in a number.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    iMask = ~iMask;
    
    iResult = iNo & iMask;
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

    iRet = OffBit(iValue,iBit);

    cout<<"Result is: "<<iRet<<"\n";

    return 0;
}