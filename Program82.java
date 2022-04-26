/*

Write a program which accept string from user and display it inn
reverse order.

Input : MarvellouS

Output : SuollevraM

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


class Demo82 extends StringX
{

    public String ReverseString()
    {
   
          char Arr[] = str.toCharArray(); 
          int iStart = 0;
          int iEnd = Arr.length-1;
          char temp ;

          while(iStart < iEnd)
          { 
          	 temp =Arr[iStart];
          	 Arr[iStart] = Arr[iEnd];
          	 Arr[iEnd] = temp;

          	 iStart++;
          	 iEnd--;

           }   
          
        return String.valueOf(Arr);

    }


}



class Program82
{
	 public static void main(String[] args) 
	 {
	  
         Demo82 dobj = new Demo82();

         dobj.Accept();

         String sRet =  dobj.ReverseString();

         System.out.println("\nReverce String iS : "+sRet);

      
         System.out.println("\n");



	 }

}
