#include<stdio.h>

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

     	iAdd = iAdd + iDigit;

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

	iRet = AddDigit(iVal);

	printf("\nAddition of Digit is : %d ",iRet);

	printf("\n");

	return 0;
}