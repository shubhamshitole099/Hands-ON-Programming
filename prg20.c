/*

Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *

*/


#include<stdio.h>

void Display(int iNo)
{

int i = 0;

printf("\n");

for (i = 1; i <= iNo ; i++)
{
   
 printf("%d * \t",i);

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