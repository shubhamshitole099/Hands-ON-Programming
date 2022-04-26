/*

Accept N numbers from user and return product of all odd elements.
Input : N : 6

Elements :15 66 3 70 10 88

Output : 45
Input : N : 6

Elements :44 66 72 70 10 88

Output : 0

*/


import java.util.Scanner;

class Demo61
{


	public int Product(int Arr[])
	{
	      int i = 0;
	      int iResult = 1;

      
       	  for(i = 0; i < Arr.length; i++)
		  {
		  	   if(Arr[i] % 2 != 0)
		  	   {
		  	   	   iResult = iResult * Arr[i];
		  	   }
		    
		  }
		  
		  if(iResult == 1)
		  {
		  	return 0;
		  }

		  return iResult;
	}



}


class Program62
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

      Demo61 dobj = new Demo61();

      iRet = dobj.Product(Arr);

      System.out.println("\nProduct Of All Odd Numbers Are : "+iRet);
   
      System.out.print("\n");



	}
}