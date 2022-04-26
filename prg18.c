/*

Accept number from user and display below pattern.
Input : 5
Output : A B C D E

*/

#include<stdio.h>

void Display(int iNo)
{

int i = 0;
char ch = 'A';

printf("\n");

for (i = 1; i <= iNo ; i++)
{
   
 printf("%c\t",ch);
 ch++;

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