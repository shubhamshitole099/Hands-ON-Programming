/*

Accept N numbers from user and return the smallest number.
Input : N : 6

Elements :85 66 3 66 93 88

Output : 3

*/



import java.util.Scanner;

class Demo74
{


	public int Min(int Arr[])
	{
	      int i = 0;
	      int iMin = Arr[0];

      
       	  for(i = 0; i < Arr.length; i++)
		  {
		  	   if(Arr[i] < iMin)
		  	   {
		  	   	 iMin = Arr[i];
		  	   }
		    
		  }
		  
		return iMin; 

	}



}


class Program74
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

      Demo74 dobj = new Demo74();

      iRet = dobj.Min(Arr);

      System.out.println("\nMinimum Number Is : "+iRet);
   
      System.out.print("\n");



	}
}