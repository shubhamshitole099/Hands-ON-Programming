#include<stdio.h>
#include <stdbool.h>


bool CheckPrime(int iNo)
{

   int iCnt = 0;
   int iFlag = 0;

   if(iNo < 0)
   {
   	iNo = -iNo;
   }

   if(iNo == 1 || iNo == 0)
   {
   	return 0;

   }

   for(iCnt = 2; iCnt <= iNo/2; iCnt++)
     {
     	if(iNo % iCnt == 0)
     	{
     		iFlag = 1;
     		break;
     	}
     }

     if(iFlag == 0)
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
   int iVal = 0;
   bool bRet = false;

   printf("\nEnter Number: ");
   scanf("%d",&iVal);

   bRet = CheckPrime(iVal);

   if(bRet == true)
   {
  
      printf("\nNumber is prime");

   }
   else
   {
   	printf("\nNumber is not prime");
   }

   printf("\n");

   return 0;

}