/*

Write a program which accept string from user and convert it into
lower case.

Input : Marvellous Multi OS

Output : marvellous multi os

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

class Demo83 extends StringX
{

    public String ConvertLower()
    {
   
          char Arr[] = str.toCharArray(); 
        
           for(int i = 0; i< Arr.length; i++)
           {
                
                if((Arr[i] >= 'A') && (Arr[i] <= 'Z' ))
                {
                	Arr[i] = Character.toLowerCase(Arr[i]);
                }

               

           }


        return String.valueOf(Arr);

    }


}



class Program83
{
	 public static void main(String[] args) 
	 {
	  
         Demo83 dobj = new Demo83();

         dobj.Accept();

         String sRet =  dobj.ConvertLower();
    
          System.out.println("\nIn Lower Case : "+sRet);
       

         System.out.println("\n");



	 }

}
