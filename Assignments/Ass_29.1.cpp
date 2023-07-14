////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which acceept one number from user and count number of
//                    ON (1) bits in it without using % and / operator.                 
//                    Input : 11
//                    Output : 3
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;


////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : CountOne
// Input : integer
// Output : returns iCnt value
// Description : This function counts the number of ON bits in a number.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

UINT CountOne(UINT iNo)
{
    UINT iCnt = 0;
    UINT iResult = 0;

    while(iNo != 0)
    {   
        iResult = iNo & 1;
        if(iResult == 1)
        {
           iCnt++; 
        }
        iNo = iNo >> 1;
    }
    
    return iCnt;
}

////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function main
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    //////////////////////////////////////////////////////////////
    // Accepting integer value of number.
    //////////////////////////////////////////////////////////////

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    ////////////////////////////////////////////////////
    // Passing value to the bussiness logic function
    ///////////////////////////////////////////////////

    iRet = CountOne(iValue);

    cout<<"Result is: "<<iRet<<"\n";

    return 0;
}