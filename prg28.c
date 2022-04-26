/*

Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
A B C D
A B C D
A B C D
A B C D

*/


#include<stdio.h>

void Display(int iRow,int iCol)
{

int i = 0;
int j = 0;
char ch = '\0';

printf("\n");

for (i = 1; i <= iRow ; i++)
{
   
  for(j = 1,ch ='A'; j<= iCol; j++,ch++)
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