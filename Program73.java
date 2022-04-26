/*

Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
Octal 0101
Hexadecimal 0X41

*/







import java.util.Scanner;


class Demo73
{
    

    public void Display(char cVar)
    { 
       int Val = (int) cVar;
   
       System.out.println("\nDecimal : "+Val);
       System.out.println("\nOctal : "+Integer.toOctalString(Val));
       System.out.println("\nHexadecimal : 0X"+Integer.toHexString(Val));
      
    }

}



class Program73
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo73 dobj = new Demo73();

		 dobj.Display(cVal);

         System.out.print("\n");

	}
}