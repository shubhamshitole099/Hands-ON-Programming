#include<stdio.h>

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


  printf("\nEnter Number : ");
  scanf("%d",&iVal);

  iRet = Reverce(iVal);

  printf("\nReverse Number iS : %d ",iRet);

  printf("\n");

  return 0;


}