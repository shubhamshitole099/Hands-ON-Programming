/*

Accept N numbers from user and display summation of digits of each
number.
Input : N : 6

Elements :8225 665 3 76 953 858

Output : 17 17 3 13 17 21

*/




import java.util.Scanner;

 class Demo77
 {

     public void DisplaySummation(int Arr[])
     {
     
         int iCnt = 0;
         int jCnt = 0;
         int iSum = 0;

         System.out.println("\nSummation of digits are :\n");

         for(iCnt = 0; iCnt < Arr.length; iCnt++)
         {
         	jCnt = Arr[iCnt];

         	while(jCnt != 0)
         	{
         		int iDigit = jCnt % 10;
         		iSum = iSum + iDigit;
         		jCnt = jCnt / 10;


         	}

         	System.out.print(iSum+"\n");
         	iSum = 0;
         }

     }


 }




class Program77
{
	 public static void main(String[] args)
	 {
	 	
	 
      	Scanner sobj = new Scanner(System.in);

	     int iSize = 0;

	     System.out.print("\nEnter Array Size : ");
	     iSize = sobj.nextInt();

	     int Arr[] = new int[iSize];

	     System.out.print("\nEnter Array Elements :\n");
	     for(int i = 0; i< Arr.length; i++)
	     {
	     	Arr[i] = sobj.nextInt();
	     }

	      Demo77 dobj = new Demo77();

	      dobj.DisplaySummation(Arr);

	      System.out.print("\n");

     }

}

