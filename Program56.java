/*

Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements :85 66 3 15 93 88
Output : 0
Input : N : 6
Elements :85 11 3 15 11 111
Output : 2

*/



import java.util.*;

class Demo56
{
 
  public int CountEven (int Brr[])
  {
    
     int i =0;
     int iCnt = 0;

      for(i = 0; i < Brr.length; i++)
      {  
      	if(Brr[i] == 11)
      	{
      		iCnt++;
      	}
      	
      }
     return iCnt;
  }

}



class Program56
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
	  int iRet = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo56 dobj = new Demo56();


	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  Arr = new int[iSize];

	  System.out.print("\nEnter Array Elements :\n");
	  for(i = 0; i < Arr.length; i++)
	  {
    
         Arr[i] = sobj.nextInt();

	  }

    iRet = dobj.CountEven(Arr);

     System.out.print("\nCount Is : "+iRet);

     System.out.print("\n");


	}
}