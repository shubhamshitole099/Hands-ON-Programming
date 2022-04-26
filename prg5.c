#include<stdio.h>

int CountDigit(int iNo)
{
  
  int iDigit = 0;
  int iCnt = 0;

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

	printf("\nEnter Digit : ");
	scanf("%d",&iVal);

	iRet = CountDigit(iVal);

	printf("\nNumber of digits are : %d ",iRet);

	printf("\n");

	return 0;

}