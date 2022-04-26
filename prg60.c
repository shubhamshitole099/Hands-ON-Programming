/*

Accept N numbers from user and accept one another number as NO , 
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1

*/



#include<stdio.h>
#include<stdlib.h>



int LastOccurance(int Brr[],int iLength,int iNo)
{
  
  int i = 0;

  for(i = iLength-1; i >= 0; i--)
  {
  	if(Brr[i] == iNo)
  	{
  	
  	   break;
  	}

  }

if(i == iLength)
{
	return -1;
}
else
{
	return i;
}

}


int main()
{
  int *ptr = NULL;
  int iVal = 0;
  int iSize = 0;
  int iRet = 0;
  int i = 0;

 printf("\nEnter Array Size : ");
 scanf("%d",&iSize);


 ptr = (int*)malloc(sizeof(int) * iSize);

 printf("\nEnter Array Elements :\n");
 for(i = 0; i < iSize; i++)
 {
 	scanf("%d",&ptr[i]);
 }

   printf("\nEnter Number : ");
   scanf("%d",&iVal);

 iRet = LastOccurance(ptr,iSize,iVal);

if(iRet == -1)
{
  
  printf("\nThere Is No Such Number");

}
else
{

 printf("\nIndex Is : %d",iRet);
 

}
  
 printf("\n");
 free(ptr);

  return 0;

}