/*

Accept N numbers from user and return the largest number.
Input : N : 6

Elements :85 66 3 66 93 88

Output : 93

*/


import java.util.Scanner;

class Demo63
{


	public int Max(int Arr[])
	{
	      int i = 0;
	      int iMax = Arr[0];

      
       	  for(i = 0; i < Arr.length; i++)
		  {
		  	   if(iMax < Arr[i])
		  	   {
		  	   	 iMax = Arr[i];
		  	   }
		    
		  }
		  
		return iMax; 

	}



}


class Program63
{
	public static void main(String[] args) 
	{
	  Scanner sobj = new Scanner(System.in);

      int iSize = 0;
      int iRet = 0;
     
       System.out.print("\nEnter Array Size : ");
       iSize = sobj.nextInt();

       int Arr[] = new int[iSize];

       System.out.print("\nEnter Array Elements :\n");
       for(int i = 0; i < Arr.length; i++)
       {
            Arr[i] = sobj.nextInt();
       }

      Demo63 dobj = new Demo63();

      iRet = dobj.Max(Arr);

      System.out.println("\nMaximum Number Is : "+iRet);
   
      System.out.print("\n");



	}
}