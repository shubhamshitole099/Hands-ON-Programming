/*

Accept N numbers from user and accept one another number as NO , 
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1

*/


import java.util.*;

class Demo60
{
 
  public int FistOccurance(int Brr[],int iNo)
  {
    
     int i =0;

      for(i = Brr.length-1; i >= 0; i--)
      {  
      	if(Brr[i] == iNo)
      	{
      		
      		break;
      	}
      	
      }
 
     if(i < Brr.length)
     {
     	return i;
     }
     else
     {
     	return -1;
     }

  }

}



class Program60
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
	  int iRet = 0;
	  int iVal = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo60 dobj = new Demo60();


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

     iRet = dobj.FistOccurance(Arr,iVal);
  
      System.out.print("\nIndex Is : "+iRet);

     System.out.print("\n");


	}
}