#include<stdio.h>



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
      

	for(iCnt = 1; iCnt <=10; iCnt++)
	{
		itbl = iNo * iCnt;

		printf("%d\n",itbl);
	}
}



int main()
{
    int iVal = 0;

    printf("\nEnter Number : ");
    scanf("%d",&iVal);

    DisplayTable(iVal);

    printf("\n");

    return 0;
}