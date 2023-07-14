////////////////////////////////////////////////////////////////////////////////////
//
//Problem Statement : Write a program which acceept two number from user and display position 
//                    of common ON bits from that two numbers.
//                    Input : 10   15  (1010     1111)
//                    Output : 2    4
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;


////////////////////////////////////////////////////////////////////////////////////
//
// Function Nmae : CommonBits
// Input : integer
// Output : returns iCnt value
// Description : This function displays position of common ON bits from two numbers.
// Author Name : Gayatri Pravin Patil
// Date : 11/06/2023
//
////////////////////////////////////////////////////////////////////////////////////

void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iCnt = 1;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    while((iNo1 != 0) || (iNo2 != 0))
    {   
        iResult1 = iNo1 & 1;
        iResult2 = iNo2 & 1;
        if((iResult1 == 1) && (iResult2 == 1))
        {
           cout<<iCnt<<"\t";
        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        iCnt++;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function main
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    //////////////////////////////////////////////////////////////
    // Accepting integer value of number.
    //////////////////////////////////////////////////////////////

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue2;

    ////////////////////////////////////////////////////
    // Passing value to the bussiness logic function
    ///////////////////////////////////////////////////

    CommonBits(iValue1,iValue2);

    return 0;
}