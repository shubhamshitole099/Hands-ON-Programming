/*

Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6

Elements :85 66 3 66 93 88

Output : 90 (93 -3)

*/



import java.util.Scanner;

class Demo75
{


	public int Diff(int Arr[])
	{
	      int i = 0;
	      int iMin = Arr[0];
	      int iMax = Arr[0];

      
       	  for(i = 0; i < Arr.length; i++)
		  {
		  	   if(Arr[i] < iMin)
		  	   {
		  	   	 iMin = Arr[i];
		  	   }
		  	   else if(Arr[i] > iMax)
		  	   {
		  	   	iMax = Arr[i];
		  	   }
		    
		  }
		  
		return iMax - iMin; 

	}



}


class Program75
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

      Demo75 dobj = new Demo75();

      iRet = dobj.Diff(Arr);

      System.out.println("\nDifference Is : "+iRet);
   
      System.out.print("\n");



	}
}