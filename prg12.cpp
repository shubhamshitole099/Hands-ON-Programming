#include<iostream>
using namespace std;

void DisplayTable(int iNo)
{
	int iCnt = 0;
	int itbl = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	if(iNo == 0 || iNo == 1)
      {
      	return ;
      }

	for(iCnt = 1; iCnt <= 10; iCnt++)
   {
   	
   	itbl = iNo * iCnt;
    
     cout<<itbl<<"\n";
   }

}

int main()
{
   int iVal = 0;

   cout<<"\nEnter Number : ";
   cin>>iVal;

   DisplayTable(iVal);

   return 0;

}