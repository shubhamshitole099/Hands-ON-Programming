/*

Write a program which accept string from user and toggle the case.

Input : Marvellous Multi OS

Output : mARVELLOUS mULTI os

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

class Demo85 extends StringX
{

    public String ToggelString()
    {
   
          char Arr[] = str.toCharArray(); 
          

           for(int i = 0; i< Arr.length; i++)
           {
                
                if((Arr[i] >= 'a') && (Arr[i] <= 'z' ))
                {
                	Arr[i] = Character.toUpperCase(Arr[i]);
                }
                else
                {
                	Arr[i] = Character.toLowerCase(Arr[i]);
                }

               

           }


        return String.valueOf(Arr);

    }


}



class Program85
{
	 public static void main(String[] args) 
	 {
	  
         Demo85 dobj = new Demo85();

         dobj.Accept();

         String sRet =  dobj.ToggelString();
    
          System.out.println("\nToggle String IS: "+sRet);
       

         System.out.println("\n");



	 }

}
