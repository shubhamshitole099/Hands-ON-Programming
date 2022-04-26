#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
   int iFact = 0;

   if(iNo < 0)
   {
   	
   	iNo = -iNo;

   }

   for(iFact = 1; iFact <= (iNo / 2); iFact++)
   {
   	 if((iNo % iFact) == 0)
   	 {
   	 	cout<<iFact<<"\t";
   	 }
   }


}

int main()
{
	int iVal = 0;

	cout<<"\nEnter Number : ";
	cin>>iVal;

	DisplayFactor(iVal);

	cout<<"\n";

	return 0;
}