/*

Accept N numbers from user and accept one another number as NO , 
check whether NO is present or not.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE

*/


import java.util.*;

class Demo58
{
 
  public boolean CheckNumber(int Brr[],int iNo)
  {
    
     int i =0;
     int iFlag = 0;

      for(i = 0; i < Brr.length; i++)
      {  
      	if(Brr[i] == iNo)
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



class Program58
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
	  boolean bRet = false;
	  int iVal = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo58 dobj = new Demo58();


	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  Arr = new int[iSize];

	  System.out.print("\nEnter Array Elements :\n");
	  for(i = 0; i < Arr.length; i++)
	  {
    
         Arr[i] = sobj.nextInt();

	  }

	  System.out.print("\nEnter Number : ");
	  iVal = sobj.nextInt();

     bRet = dobj.CheckNumber(Arr,iVal);
  
      if(bRet == true)
      {
      	System.out.print("\nNumber Is Present");
      }
      else
      {
      	System.out.print("\nNumber Is Absent");
      }
      
     System.out.print("\n");


	}
}