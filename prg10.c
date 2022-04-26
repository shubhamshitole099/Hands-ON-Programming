#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
	int iCnt  = 0;
	int iSum = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
   
   
  if(iNo == 0)
  {
    return 0;
  }



     for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
     {
        if((iNo % iCnt) == 0)
        {
        	iSum = iSum +iCnt;
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
  bool bRet = 0;

  printf("\nEnter Number : ") ;
  scanf("%d",&iVal);


  bRet = CheckPerfect(iVal);

  if(bRet  == true)
  {
    printf("\nNumber is perfect");

  }
  else
  {
  	printf("\nNumber is not perfect");
  }

  printf("\n");

}