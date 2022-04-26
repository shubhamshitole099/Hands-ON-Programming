#include<stdio.h>

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

  	if((iDigit % 2) == 0)
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

	printf("\nEnter Number : ");
	scanf("%d",&iVal);

	iRet = CountEven(iVal);

	printf("\nCount of Even Number is : %d",iRet);

	printf("\n");

	return 0;


}