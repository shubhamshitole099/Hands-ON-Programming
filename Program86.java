/*
Write a program which accept string from user and display only
digits from that string.

Input : marve89llous121

Output : 89121

Input : Demo

*/


import java.util.Scanner;

class StringX
{
   
    public String str;

   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);

   	 System.out.println("\nEnter String : ");
   	 str = sobj.nextLine();
   }



}

class Demo86 extends StringX
{

    public void DisplayDigits()
    {
   
          char Arr[] = str.toCharArray(); 
          

           for(int i = 0; i< Arr.length; i++)
           {
                
                if((Arr[i] >= '0') && (Arr[i] <= '9' ))
                {
                	System.out.print(Arr[i]+"\t");
                }
              

           }

    }


}



class Program86
{
	 public static void main(String[] args) 
	 {
	  
         Demo86 dobj = new Demo86();

         dobj.Accept();

          dobj.DisplayDigits();
   
         System.out.println("\n");



	 }

}
