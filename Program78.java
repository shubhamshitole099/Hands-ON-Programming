/*

Write a program which accept string from user and count number of
capital characters.

Input : Marvellous Multi OS

Output : 4

*/



import java.util.Scanner;


class Demo78
{

    public int CountCapital(String str)
    {
   
          char Arr[] = str.toCharArray(); 

          int i = 0;
          int iCnt = 0;


          for(i =0; i<Arr.length; i++)
          {  

          	   if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
          	   {
          	   	  iCnt++;
          	   }


          }

          return iCnt;



    }


}



class Program78
{
	 public static void main(String[] args) 
	 {
	   
         Scanner sobj = new Scanner(System.in);

         String str;

         System.out.print("\nEneter String : ");
         str = sobj.nextLine();

         Demo78 dobj = new Demo78();

         int iRet = dobj.CountCapital(str);

         System.out.println("\nNumber of capital characters are : "+iRet);

         System.out.println("\n");



	 }

}