#include<iostream>
using namespace std;

int CountEven(int iNo)
{

	int iDigit = 0;
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		if((iDigit % 2 ) == 0 )
		{
			iCnt++;
		}

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

	iRet = CountEven(iVal);

	cout<<"\nCount of even number is : "<<iRet<<"\n";

	return 0;
}