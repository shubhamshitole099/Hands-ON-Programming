/*

Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212

*/



#include<stdio.h>


int RangeAddition(int iStart,int iEnd)
{

   int i = 0;
   int iSum = 0;


   for(i = iStart ; i <= iEnd; i++)
   {
      iSum = iSum + i;
   }

   return iSum;


}


int main()
{
	int iVal1 = 0;
	int iVal2 = 0;
	int iRet = 0;

  printf("\nEnter Starting Point : ");
  scanf("%d",&iVal1);

  printf("\nEnter Ending Point : ");
  scanf("%d",&iVal2);


   iRet = RangeAddition(iVal1,iVal2);

   if(iRet < 0)
   {
   	iRet = -iRet;
   }

   printf("\nAddition is : %d ",iRet);
   
   printf("\n");

   return 0;

}