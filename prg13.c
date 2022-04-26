/*

Write a program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35

*/


#include<stdio.h>


void DisplayRange(int iStart,int iEnd)
{

   int i = 0;

   printf("\n");

   for(i = iStart ; i <= iEnd; i++)
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


   DisplayRange(iVal1,iVal2);

   printf("\n");

   return 0;

}