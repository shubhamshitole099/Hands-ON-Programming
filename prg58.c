/*

Accept N numbers from user and accept one another number as NO , 
check whether NO is present or not.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE

*/



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNumber(int Brr[],int iLength,int iNo)
{
  
  int i = 0;
  int iFlag = 0;

  for(i = 0; i < iLength; i++)
  {
  	if(Brr[i] == iNo)
  	{
  	
  	   iFlag = 1;
       break;
  	}

  }

  if(iFlag == 1)
  {
    return true;
  }
  else
  {
    return false;
  }

}


int main()
{
  int *ptr = NULL;
  int iVal = 0;
  int iSize = 0;
  bool bRet = false;
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

 bRet = CheckNumber(ptr,iSize,iVal);

  if(bRet == true)
  {
    printf("\nNumber is present");
  }
  else
  {
    printf("\nNumber is absent");
  }
 
  printf("\n");

  free(ptr);

  return 0;

}