/*


Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88

Output : 85 66 76 88

*/


import java.util.Scanner;

class Demo61
{


	public void DisplayRange(int Arr[],int iStart,int iEnd)
	{
	      int i = 0;

      
    for(i = 0; i < Arr.length; i++)
		  {
		     if((Arr[i] > iStart) && (Arr[i] < iEnd))
                 {
                    System.out.print(Arr[i]+"\t");
                 }
		  }
	}



}


class Program61
{
	public static void main(String[] args) 
	{
	  Scanner sobj = new Scanner(System.in);

      int iRange1 = 0;
      int iRange2 = 0;
      int iSize = 0;
     
       System.out.print("\nEnter Array Size : ");
       iSize = sobj.nextInt();

       int Arr[] = new int[iSize];

       System.out.print("\nEnter Array Elements :\n");
       for(int i = 0; i < Arr.length; i++)
       {
            Arr[i] = sobj.nextInt();
       }


      System.out.print("\nEnter First Range : ");
      iRange1 = sobj.nextInt();

      System.out.print("\nEnter Second Range : ");
      iRange2 = sobj.nextInt();

      Demo61 dobj = new Demo61();

      dobj.DisplayRange(Arr,iRange1,iRange2);
   
      System.out.print("\n");



	}
}