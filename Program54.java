/*

Accept N numbers from user and return difference between frequency of 
even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)

*/


import java.util.*;

class Demo54
{
 
  public int CountEven(int Brr[])
  {
    
     int i =0;
     int eCnt = 0;
     int oCnt = 0;

      for(i = 0; i < Brr.length; i++)
      {  
      	if((Brr[i] % 2) == 0)
      	{
      		eCnt++;
      	}

      	else if((Brr[i] % 2) != 0)
      	{
      		oCnt++;
      	}
      	
      }
     return eCnt - oCnt;
  }

}



class Program54
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
	  int iRet = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo54 dobj = new Demo54();


	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  Arr = new int[iSize];

	  System.out.print("\nEnter Array Elements :\n");
	  for(i = 0; i < Arr.length; i++)
	  {
    
         Arr[i] = sobj.nextInt();

	  }

     iRet = dobj.CountEven(Arr);

     System.out.print("\nCount Of Even Number Is : "+iRet);

     System.out.print("\n");


	}
}