/*

Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements :85 66 3 15 93 88
Output : 0
Input : N : 6
Elements :85 11 3 15 11 111
Output : 2

*/




#include<stdio.h>
#include<stdlib.h>


int Count(int Brr[],int iLength)
{
  
  int i = 0;
  int iCnt = 0;

  for(i = 0; i < iLength; i++)
  {
  	if(Brr[i]  == 11)
  	{
  		iCnt++;
  	}
  }

  return iCnt;
}


int main()
{
  int *ptr = NULL;

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
 
 iRet = Count(ptr,iSize);
 
 printf("\nCount Is : %d",iRet);

  printf("\n");

  free(ptr);

  return 0;

}