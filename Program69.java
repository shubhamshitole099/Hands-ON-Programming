/*

Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255. 

*/




import java.util.Scanner;


class Demo69
{
   public void DisplayASCIITable()
   {
   	  System.out.println("\n-----------------------ASCII Table----------------------");
   	  System.out.print("\n");
   	  System.out.println("\n********************************************************");

   	  System.out.println("\n");
   	
   	  System.out.print(("\nDECIMAL \t"+"HEXADECIMAL \t"+"OCTAL \t"+"\tSymbol \t\n"));
   	  System.out.println("\n*******************************************************");

   	  for(int i = 0; i<=127; i++)
   	  {
   	  	System.out.println(i+"\t\t"+String.format("%x",i)+"\t\t"+String.format("%o",i)+i+"\t\t"+(char) i+"\t\t");
   	  }
   }
   


}



class Program69
{
	public static void main(String[] args) 
	{

         Demo69 dobj = new Demo69();

         dobj.DisplayASCIITable();

         System.out.print("\n");

	}
}

