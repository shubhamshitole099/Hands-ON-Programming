/*

Write a program which accept range from user and display all even numbers in
between that range.

Input : 23 35
Output : 24 26 28 30 32 34

*/



#include<stdio.h>


void DisplayEven(int iStart,int iEnd)
{

   int i = 0;

   printf("\n");

   for(i = iStart ; i <= iEnd; i++)
   {

   	if((i % 2)==0)
   	{

   		printf("%d\t",i);

   	}
   	

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


   DisplayEven(iVal1,iVal2);

   printf("\n");

   return 0;

}