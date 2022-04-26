/*

Accept N numbers from user and return difference between summation 
of even elements and summation of odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)

*/

import java.util.*;

class Demo48
{
 
  public int DiffEvenOdd(int Brr[])
  {
    
    int i =0;
    int iEven = 0;
    int iOdd = 0;

      for(i = 0; i < Brr.length; i++)
      {  
      	if((Brr[i] % 2) == 0)
      	{
      		iEven = iEven + Brr[i];
      	}
      	else if((Brr[i] % 2) != 0)
      	{
      		iOdd = iOdd + Brr[i];
      	}

      }
   
     return iEven - iOdd;  

  }


}



class Program48
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
      int iRet = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo48 dobj = new Demo48();


	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  Arr = new int[iSize];

	  System.out.print("\nEnter Array Elements :\n");
	  for(i = 0; i < Arr.length; i++)
	  {
    
         Arr[i] = sobj.nextInt();

	  }

     iRet = dobj.DiffEvenOdd(Arr);

     if(iRet < 0)
     {
     	iRet = -iRet;
     }
 
     System.out.print("\nDifference iS : "+iRet);

     System.out.print("\n");


	}
}