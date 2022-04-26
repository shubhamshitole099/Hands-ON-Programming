#include<iostream>
using namespace std;

int AddDigit(int iNo)
{ 
	 int iAdd = 0;
	 int iDigit = 0;

  if(iNo < 0)
  {
  	iNo = -iNo;
  }

  while(iNo != 0)
  {

     iDigit = iNo % 10;

     iAdd = iDigit + iAdd;

     iNo = iNo / 10;

  }

   return iAdd;


}

int main()
{
	int iVal = 0;
	int iRet = 0;

	cout<<"\nEnter Number : ";
	cin>>iVal;

	iRet = AddDigit(iVal);

	cout<<"\nAddidtion Of Digit  Is : "<<iRet<<"\n";

	return 0; 
}