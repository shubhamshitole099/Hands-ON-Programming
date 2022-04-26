/*

Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16

*/

#include<stdio.h>

void Display(int iNo)
{

int i = 0;

printf("\n");

for (i = 1; i <= iNo ; i++)
{
   
 printf("%d\t",i*2);

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