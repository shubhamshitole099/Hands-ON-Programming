#include<iostream>
using namespace std;

int AddNumber(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	  if(iNo < 0)
	  {
	  	iNo = -iNo;
	  }

	 for (iCnt = 1; iCnt <= iNo; iCnt++)
	 {
	 	iSum = iSum + iCnt;
	 }

	  return iSum;

}

int main()
{
	int iVal = 0;
	int iRet = 0;

	cout<<"\nEnter Number : ";
	cin>>iVal;

	iRet = AddNumber(iVal);

	cout<<"\nTill that number addition is : "<<iRet<<"\n";

	return 0;
}