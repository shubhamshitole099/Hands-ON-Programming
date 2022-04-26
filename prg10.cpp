#include<iostream>
using namespace std;



bool CheckPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;


	if(iNo < 0)
	{
		iNo = -iNo ;

	}

	if(iNo == 0)
	{
		return 0;
	}

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
    	if((iNo % iCnt)== 0)
    	{
    		iSum = iSum + iCnt;
    	}
    }

    if(iSum == iNo)
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

  bRet = CheckPerfect(iVal);

  if(bRet == true)
  {
  	cout<<"\nNumber Is Perfect"<<"\n";
  }
  else
  {
  	cout<<"\nNumber Is Not Perfect"<<"\n";
  }

  return 0;


}