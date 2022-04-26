/*

Accept N numbers from user check whether that numbers contains 11 in 
it or not.

Input : N : 6
Elements :85 66 11 80 93 88

Output : 11 is present

Input : N : 6
Elements :85 66 3 80 93 88

Output : 11 is absent

*/



import java.util.*;

class Demo55
{
 
  public boolean CheckNumber(int Brr[])
  {
    
     int i =0;
     int iFlag = 0;

      for(i = 0; i < Brr.length; i++)
      {  
      	if(Brr[i] == 11)
      	{
      		iFlag = 1;
      		break;
      	}
      	
      }

      if(iFlag == 1)
      {
      	return true;
      }
      else
      {
      	return false;
      }
    
  }

}



class Program55
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
	  boolean bRet = false;

	  Scanner sobj = new Scanner(System.in);
	  Demo55 dobj = new Demo55();


	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  Arr = new int[iSize];

	  System.out.print("\nEnter Array Elements :\n");
	  for(i = 0; i < Arr.length; i++)
	  {
    
         Arr[i] = sobj.nextInt();

	  }

     bRet = dobj.CheckNumber(Arr);

     if(bRet == true)
     {
     	System.out.print("\n11 is presemt");
     }
     else
     {
     	System.out.print("\n11 is absent");
     }
     
     System.out.print("\n");


	}
}