/*

Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6

Elements :8225 665 3 76 953 858

Output : 665 953 858

*/




import java.util.Scanner;

class Demo76
{
 
  public void Display(int Arr[])
   {
      int iCount = 0, jCount = 0, kCount = 0;

      System.out.print("\nThree Digit Elements Are :\n");

      for (iCount = 0; iCount < Arr.length; iCount++)
       {
        kCount = 0;
        jCount = Arr[iCount];
        while (jCount != 0)
        {
            jCount = jCount / 10;
            kCount++;
        }
        if (kCount == 3)
        {
           System.out.print(Arr[iCount]+"\n");
        } 
    }    

}

}

class Program76
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

      Demo76 dobj = new Demo76();

      dobj.Display(Arr);
   
      System.out.print("\n");



	}
}