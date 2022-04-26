#include<iostream>
using namespace std;



int Reverce(int iNo)
{
  int iDigit = 0;
  int iRev = 0;

  if(iNo < 0)
  {
  	iNo = -iNo;
  }
  
  while(iNo != 0)
  {
  	iDigit = iNo % 10;

  	iRev = iRev * 10 + iDigit;

  	iNo = iNo / 10;
  } 

  return iRev;


}

int main()
{

   int iVal = 0;
   int iRet = 0;

   cout<<"\nEnter Number : ";
   cin>>iVal;

   iRet = Reverce(iVal);

   cout<<"\nReverse is : "<<iRet<<"\n";

   return 0;



}