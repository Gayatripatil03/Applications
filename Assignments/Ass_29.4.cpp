////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which accept one number,two positions form user and 
//                    check whether bit at first or bit at second position is ON or OFF.
//       Input : 10   3   7
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
// Description : This function checks whether bit at particular two position is ON or OFF.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    if(((iPos1 < 1) || (iPos1 > 32)) || ((iPos2 < 1) || (iPos2 > 32)))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }

    iMask1 = iMask1 << (iPos1); 
    iMask2 = iMask2 << (iPos2);

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

    bRet = ChkBit(iValue,iBit1,iBit2);

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