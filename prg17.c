/*

Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

*/


#include<stdio.h>


void DisplayRangeRev(int iStart,int iEnd)
{

   int i = 0;

   printf("\n");

   for(i = iEnd ; i >= iStart; i--)
   {
   	
   	printf("%d\t",i);

   }


}


int main()
{
	int iVal1 = 0;
	int iVal2 = 0;

  printf("\nEnter Starting Point : ");
  scanf("%d",&iVal1);

  printf("\nEnter Ending Point : ");
  scanf("%d",&iVal2);


   DisplayRangeRev(iVal1,iVal2);

   printf("\n");

   return 0;

}