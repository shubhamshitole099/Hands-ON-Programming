
/*

Accept Character from user and check whether it is digit or not
(0-9).
Input :
7
Output : TRUE
Input :
d
Output : FALSE

*/




import java.util.Scanner;

class Demo66
{

    public boolean CheckDigit(char cVar)
    {
    
       if((cVar > (char)(47))&&(cVar < (char)(58)))
       	  return true;
       	else
       		return false;

    }

}



class Program66
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo66 dobj = new Demo66();

		 boolean bRet = dobj.CheckDigit(cVal);
    
         if(bRet == true)
         {
         	System.out.println("\nIt is digit");
         }
         else
         {
         	System.out.println("\nIt is not  digit");
         }

         System.out.print("\n");

	}
}