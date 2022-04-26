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


#include<iostream>
#include<stdlib.h>
using namespace std;

bool CheckNumber(int Brr[] , int iLength,int iNo)
{

    int i  = 0;
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
  int iSize = 0;
  bool bRet  = false;
  int i = 0;
  int iVal = 0;
   
  cout<<"\nEnter Array Size : ";
  cin>>iSize;

  ptr = new int[iSize];

  cout<<"\nEnter Array Elements :\n";

  for(i = 0; i < iSize; i++)
  {
  	cin>>ptr[i];
  }
  
  cout<<"\nEnter Number : ";
  cin>>iVal;

   bRet = CheckNumber(ptr,iSize,iVal);
  
   if(bRet == true)
   {
   	cout<<"\nNumber Is Present";
   }
   else
   {
   	cout<<"\nNumber Is Absent";
   }

   delete []ptr;

   cout<<"\n";

   return 0;

}