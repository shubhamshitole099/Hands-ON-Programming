/*

Accept N numbers from user and display all such elements which are 
multiples of 11.
Input : N : 6
Elements :85 66 3 55 93 88

Output : 66 55 88

*/



import java.util.*;

class Demo52
{
 
  public void Display(int Brr[])
  {
    
     int i =0;

     System.out.print("\n");

      for(i = 0; i < Brr.length; i++)
      {  
      	if((Brr[i] % 11) == 0)
      	{
      		System.out.print(Brr[i]+"\t");
      	}
      	
      }


  }

}



class Program52
{
	public static void main(String[] args) 
	{
	  
	  int Arr[];
	  int iSize = 0;
	  int i = 0;

	  Scanner sobj = new Scanner(System.in);
	  Demo52 dobj = new Demo52();


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