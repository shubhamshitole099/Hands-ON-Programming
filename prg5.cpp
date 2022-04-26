#include<iostream>
using namespace std;

int CountDigit(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	if(iNo == 0)
	{
		return 1;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		iCnt++;

		iNo = iNo / 10;
	}

	return iCnt;

}

int main()
{
	int iVal = 0;
	int iRet = 0;

	cout<<"\nEnter Number : ";
	cin>>iVal;

	iRet = CountDigit(iVal);

	cout<<"\nNumber Of Digits Are : "<<iRet<<"\n";

	return 0;
}