/*

Write a program which accept string from user and count number of
small characters.

Input : Marvellous

Output : 9

*/


import java.util.Scanner;


class Demo79
{

    public int CountSmall(String str)
    {
   
          char Arr[] = str.toCharArray(); 

          int i = 0;
          int iCnt = 0;
 
          for(i =0; i<Arr.length; i++)
          {  

          	   if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
          	   {
          	   	  iCnt++;
          	   }


          }

          return iCnt;



    }


}



class Program79
{
	 public static void main(String[] args) 
	 {
	   
         Scanner sobj = new Scanner(System.in);

         String str;

         System.out.print("\nEneter String : ");
         str = sobj.nextLine();

         Demo79 dobj = new Demo79();

         int iRet = dobj.CountSmall(str);

         System.out.println("\nNumber of Small characters are : "+iRet);

         System.out.println("\n");



	 }

}