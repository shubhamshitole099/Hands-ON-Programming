#include<stdio.h>
#include<stdbool.h>



bool CheckPalindrome(int iNo)
{

  int iDigit = 0;
  int iRev = 0;
  int Temp = iNo;

  // if(iNo < 0)
  // {
  // 	iNo = -iNo;
  // }

  while(iNo != 0)
  {
  	iDigit = iNo % 10;
     
     iRev = iRev * 10 + iDigit;

     iNo = iNo / 10;

  }

  if( iRev == Temp)
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

   printf("\nEnter Number : ");
   scanf("%d",&iVal);

   bRet = CheckPalindrome(iVal);

   if(bRet == true)
   {
   
      printf("\nNumber Is Palindrome");

   }
   else
   {
     printf("\nNumber Is Not Palindrome");

   }


  printf("\n");

  return 0;



}