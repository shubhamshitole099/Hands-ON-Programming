/*

Accept Character from user and check whether it is capital or not
(A-Z).
Input :
F
Output : TRUE
Input :
d
Output : FALSE 

*/



import java.util.Scanner;

class Demo65
{

    public boolean CheckCapital(char cVar)
    {
    
       if((cVar > (char)(64)) && (cVar < (char)(91)))
       	  return true;
       	else
       		return false;

    }

}



class Program65
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo65 dobj = new Demo65();

		 boolean bRet = dobj.CheckCapital(cVal);
    
         if(bRet == true)
         {
         	System.out.println("\nIt is capital letter");
         }
         else
         {
         	System.out.println("\nIt is not capital letter");
         }

         System.out.print("\n");

	}
}