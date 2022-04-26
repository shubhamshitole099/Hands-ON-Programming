#include<stdio.h>

int AddEven(int iNo)
{
	int iDigit = 0;
	int iAdd = 0;

	if (iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		if((iDigit % 2) == 0)
		{
			iAdd = iAdd + iDigit;
		}

		iNo = iNo / 10;
	}

	return iAdd;

}

int main()
{
	int iVal = 0;
	int iRet = 0;

	printf("\nEnter Number : ");
	scanf("%d",&iVal);

	iRet = AddEven(iVal);

	printf("\nAdition Of Even Number is : %d",iRet);

	printf("\n");

	return 0;
}