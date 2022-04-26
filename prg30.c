/*

Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 3 iCol = 5
Output : 
A A A A A
B B B B B
C C C C C

*/


#include<stdio.h>

void Display(int iRow,int iCol)
{

int i = 0;
int j = 0;
char ch = '\0';


printf("\n");

for (i = 1, ch = 'A'; i <= iRow ; i++,ch++)
{
   
  for(j = 1; j<= iCol; j++)
  {
   
    printf("%c\t",ch);

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