#include<iostream>
using namespace std;


bool CheckPalindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int Temp = iNo;

	while(iNo != 0)
	{
    
       iDigit = iNo % 10;

       iRev = iRev * 10 + iDigit;

       iNo = iNo / 10;

	}

	if(iRev == Temp)
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


   cout<<"\nEnter Number : ";
   cin>>iVal;

   bRet = CheckPalindrome(iVal);

   if(bRet == true)
   {
   
     cout<<"\nNumber Is Palindrome"<<"\n";


   }
   else
   {

   	cout<<"\nNumber Is Not Palindrome"<<"\n";
   }

   return 0;


}
