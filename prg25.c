/*

Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output : 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{

int i = 0;
int j = 0;

printf("\n");

for (i = 1; i <= iRow ; i++)
{
   
  for(j = iCol; j>= 1; j--)
  {
  	printf("%d\t",j);
  }
  
  printf("\n");

}

}


int main()
{
	int  iVal1 = 0;
	int  iVal2 = 0;

	printf("\nEnter Rows : ");
	scanf("%d",&iVal1);
  
    printf("\nEnter Columns : ");
	scanf("%d",&iVal2);


	Display(iVal1,iVal2);

	printf("\n");

	return 0;
}