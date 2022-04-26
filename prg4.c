#include<stdio.h>

int AddNumber(int iNo)
{
   int iSum = 0;
   int iCnt = 0;

   if(iNo < 0)
   {

   	iNo = -iNo;

   }

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {

   	iSum = iSum + iCnt;
   
   }

   return iSum;

}

int main()
{
  int iVal = 0;
  int iRet = 0;

  printf("\nEnter Number : ");
  scanf("%d",&iVal);

  iRet = AddNumber(iVal);

  printf("\nTill That Number Addition is : %d ",iRet);
  
  printf("\n");

  return 0;

 
}