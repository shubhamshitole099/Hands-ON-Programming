#include<stdio.h>

void DisplayFactor(int iNo)
{
  int iFact = 0;

  if(iNo < 0)
  {
  	iNo = -iNo;
  }

  for(iFact = 1; iFact <= (iNo/2); iFact++)
  {
  	if((iNo % iFact) == 0)
  	{
  		
  		printf("%d\t",iFact);
  	}
  }

}

int main()
{
	int iVal = 0;



	printf("\nEnter Number : ");
	scanf("%d",&iVal);

	 DisplayFactor(iVal);

	printf("\n");

	return 0;
}