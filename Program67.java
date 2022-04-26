/*

Accept Character from user and check whether it is small case or
not (a-z).
Input :
g
Output : TRUE
Input :
D
Output : FALSE 

*/




import java.util.Scanner;

class Demo67
{

    public boolean CheckSmall(char cVar)
    {
    
       if((cVar > (char)(96)) && (cVar < (char)(123)))
       	  return true;
       	else
       		return false;

    }

}



class Program67
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo67 dobj = new Demo67();

		 boolean bRet = dobj.CheckSmall(cVal);
    
         if(bRet == true)
         {
         	System.out.println("\nIt is small letter");
         }
         else
         {
         	System.out.println("\nIt is not small letter");
         }

         System.out.print("\n");

	}
}