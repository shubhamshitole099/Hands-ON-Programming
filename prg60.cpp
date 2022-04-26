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



#include<iostream>
#include<stdlib.h>
using namespace std;

int LastOccurance(int Brr[] , int iLength,int iNo)
{

    int i  = 0;
    int iFlag = 0;

    for(i = iLength-1; i >= 0; i--)
    {
    	if(Brr[i] == iNo)
    	{
    		iFlag = 1;
    		break;
    	}
    
    }

   if(iFlag == 1)
   {
     return i;
   }
   else
   {
   	return -1;
   }
}

int main()
{
  int *ptr = NULL;
  int iSize = 0;
  int iRet  = 0;
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

   iRet = LastOccurance(ptr,iSize,iVal);
  
   cout<<"\nIndex Is : "<<iRet;

   delete []ptr;

   cout<<"\n";

   return 0;

}