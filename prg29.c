/*

Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 4 iCol = 4
Output : 
A B C D
a b c d
A B C D
a b c d

*/


#include<stdio.h>

void Display(int iRow,int iCol)
{

int i = 0;
int j = 0;
char ch1 = '\0';
char ch2 = '\0';

printf("\n");

for (i = 1; i <= iRow ; i++)
{
   
  for(j = 1,ch1 ='A',ch2 = 'a'; j<= iCol; j++,ch1++,ch2++)
  {
   
   if((i % 2) == 0)
   {
   	printf("%c\t",ch2);
   }
   else
   {
   	printf("%c\t",ch1);
   }
    
  

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