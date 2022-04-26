/*


Accept N numbers from user and accept one another number as NO , 
return frequency of NO form it.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : 0

*/



import java.util.*;

class Demo57
{
 
  public int CheckNumber(int Brr[],int iNo)
  {
    
     int i =0;
     int iCnt = 0;

      for(i = 0; i < Brr.length; i++)
      {  
      	if(Brr[i] == iNo)
      	{
      		iCnt++;
      	}
      	
      }
 
   return iCnt;
    
  }

}



class Program57
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;
	  int iRet = 0;
	  int iVal = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo57 dobj = new Demo57();


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

     iRet = dobj.CheckNumber(Arr,iVal);

      System.out.print("\nCount Is : "+iRet);
    
     System.out.print("\n");


	}
}