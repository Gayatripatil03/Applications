////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which accept one number from user and toggle 7th  bit of that number.
//                    Return modified number.
//                    Input : 137
//                    Output : 201
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : ToggleBit
// Input : integer
// Output : returns iResult integer value
// Description : This function toggle 7th bit of the number.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000040;
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

    //////////////////////////////////////////////////
    // Accepting integer value fro user
    /////////////////////////////////////////////////

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    ////////////////////////////////////////////////////
    // Passing value to the bussiness logic function
    ///////////////////////////////////////////////////

    iRet = ToggleBit(iValue);
    cout<<"Result is: "<<iRet<<"\n";
   
    return 0;
}



    