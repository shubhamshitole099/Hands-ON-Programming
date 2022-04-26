/*

Accept N numbers from user and return Count of even numbers.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 3

*/



import java.util.*;

class Demo53
{
 
  public int CountEven (int Brr[])
  {
    
     int i =0;
     int iCnt = 0;

      for(i = 0; i < Brr.length; i++)
      {  
      	if((Brr[i] % 2) == 0)
      	{
      		iCnt++;
      	}
      	
      }
     return iCnt;
  }

}



class Program53
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
	  int iRet = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo53 dobj = new Demo53();


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