/*

Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : marvellous

Output : TRUE

Input : Demo

Output : TRUE

Input : xyz

Output : FALSE

*/


import java.util.Scanner;


class Demo81
{

    public boolean CheckVowels(String str)
    {
   
          char Arr[] = str.toCharArray(); 

          int i = 0;
          int iFlag = 0; 

 
          for(i =0; i<Arr.length; i++)
          {  

          	   if((Arr[i] == 'a') || (Arr[i] == 'u') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') )
          	   {
          	   	  iFlag = 1;
          	   	  break;
          	   }
          	 
          }

          if(iFlag == 1)
          {
          	return true;
          }
          else
          {
          	return false;
          }


    }


}



class Program81
{
	 public static void main(String[] args) 
	 {
	   
         Scanner sobj = new Scanner(System.in);

         String str;

         System.out.print("\nEneter String : ");
         str = sobj.nextLine();

         Demo81 dobj = new Demo81();

         boolean bRet = dobj.CheckVowels(str);

          if(bRet == true)
          {
          	System.out.println("\nIt contain vowel");
          }
          else
          {
          	System.out.println("\nIt can not contain vowel");
          }

         System.out.println("\n");



	 }

}