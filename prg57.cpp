/*


Accept N numbers from user and accept one another number as NO , 
return frequency of NO form it.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : 0

*/



#include<iostream>
#include<stdlib.h>
using namespace std;

int CheckNumber(int Brr[] , int iLength,int iNo)
{

    int i  = 0;
    int iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
    	if(Brr[i] == iNo)
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
  int  iRet  = false;
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

   iRet = CheckNumber(ptr,iSize,iVal);
  
   cout<<"\nCount Is : "<<iRet;

   delete []ptr;

   cout<<"\n";

   return 0;

}