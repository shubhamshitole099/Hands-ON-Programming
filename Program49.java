/*

Accept N numbers from user and display all such elements which are 
divisible by 5.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 85 80

*/


import java.util.*;

class Demo49
{
 
  public void Display(int Brr[])
  {
    
     int i =0;

     System.out.print("\n");

      for(i = 0; i < Brr.length; i++)
      {  
      	if((Brr[i] % 5) == 0)
      	{
      		System.out.print(Brr[i]+"\t");
      	}
      	
      }


  }

}



class Program49
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo49 dobj = new Demo49();


	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  Arr = new int[iSize];

	  System.out.print("\nEnter Array Elements :\n");
	  for(i = 0; i < Arr.length; i++)
	  {
    
         Arr[i] = sobj.nextInt();

	  }

     dobj.Display(Arr);

     System.out.print("\n");


	}
}