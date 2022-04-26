#include<iostream>
using namespace std;

int AddEven(int iNo)
{
  int iDigit = 0;
  int iAdd = 0;

  if(iNo < 0)
  {
  	iNo = -iNo;

  }
  
   while(iNo != 0)
   {
   	  iDigit = iNo % 10;
   	  
   	  if ((iDigit % 2) == 0)
   	  {
   	    
   	     iAdd = iDigit + iAdd;

   	  }

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

	iRet = AddEven(iVal);

	cout<<"\nAddition of even number is : "<<iRet<<"\n";

	return 0;
}