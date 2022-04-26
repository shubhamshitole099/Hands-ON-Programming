/*

Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #

*/


#include<stdio.h>

void Display(int iNo)
{

int i = 0;

printf("\n");

for (i = iNo; i >= 1 ; i--)
{
   
 printf("%d # \t",i);

}

}


int main()
{
	int  iVal = 0;

	printf("\nEntern number : ");
	scanf("%d",&iVal);

	Display(iVal);

	printf("\n");

	return 0;
}