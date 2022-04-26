/*

Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE

*/




import java.util.Scanner;

class Demo72
{

    public boolean Check(char cVar)
    {
    
       if((cVar >= 32) && (cVar <= 47) ||(cVar >= 58) && (cVar <= 64) || (cVar >= 91) && (cVar <= 96) ||(cVar>= 123) &&(cVar <= 127))
       	  return true;
       	else
       		return false;

    }

}



class Program72
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo72 dobj = new Demo72();

		 boolean bRet = dobj.Check(cVal);
    
         if(bRet == true)
         {
         	System.out.println("\nIt Is  Special Symbol");
         }
         else
         {
         	System.out.println("\nIt Is Not Special Symbol");
         }

         System.out.print("\n");

	}
}