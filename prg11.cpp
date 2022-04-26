#include<iostream>
using namespace std;


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
	int iVal  = 0;
	bool bRet = false;

	cout<<"\nEnter Number : ";
	cin>>iVal;

	bRet = CheckPrime(iVal);

	if(bRet == true)
	{
		cout<<"\nNumber is prime"<<"\n";

	}
	else
	{
		cout<<"\nNumber is not prime"<<"\n";
	}

	return 0;
  
}