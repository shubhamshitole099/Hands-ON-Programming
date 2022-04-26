/*

Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input :
F
Output : TRUE
Input :
&
Output : FALSE

*/



import java.util.Scanner;

class Demo64
{

    public boolean CheckAlpha(char cVar)
    {
    
       if((cVar > (char)(64)) && (cVar < (char)(91)) || (cVar > (char)(96)) && (cVar < (char)(123)))
       	  return true;
       	else
       		return false;

    }

}



class Program64
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo64 dobj = new Demo64();

		 boolean bRet = dobj.CheckAlpha(cVal);
    
         if(bRet == true)
         {
         	System.out.println("\nIt is alphabet");
         }
         else
         {
         	System.out.println("\nIt is not alphabet");
         }

         System.out.print("\n");

	}
}