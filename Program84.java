/*

Write a program which accept string from user and convert it into
upper case.

Input : Marvellous Multi OS

Output : MARVELLOUS MULTI OS

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

class Demo84 extends StringX
{

    public String ConvertUpper()
    {
   
          char Arr[] = str.toCharArray(); 
          

           for(int i = 0; i< Arr.length; i++)
           {
                
                if((Arr[i] >= 'a') && (Arr[i] <= 'z' ))
                {
                	Arr[i] = Character.toUpperCase(Arr[i]);
                }

               

           }


        return String.valueOf(Arr);

    }


}



class Program84
{
	 public static void main(String[] args) 
	 {
	  
         Demo84 dobj = new Demo84();

         dobj.Accept();

         String sRet =  dobj.ConvertUpper();
    
          System.out.println("\nIn Upper Case : "+sRet);
       

         System.out.println("\n");



	 }

}
