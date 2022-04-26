/*

3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : MarvellouS

Output : 6 (8-2)

*/

import java.util.Scanner;


class Demo80
{

    public int CountDiff(String str)
    {
   
          char Arr[] = str.toCharArray(); 

          int i = 0;
          int iCnt = 0;
          int jCnt = 0;

 
          for(i =0; i<Arr.length; i++)
          {  

          	   if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
          	   {
          	   	  iCnt++;
          	   }
          	   else
          	   {
          	   	 jCnt++;
          	   }


          }

          return iCnt - jCnt;



    }


}



class Program80
{
	 public static void main(String[] args) 
	 {
	   
         Scanner sobj = new Scanner(System.in);

         String str;

         System.out.print("\nEneter String : ");
         str = sobj.nextLine();

         Demo80 dobj = new Demo80();

         int iRet = dobj.CountDiff(str);

         if(iRet < 0)
         {
         	iRet = -iRet;
         }

         System.out.println("\nDifference is: "+iRet);

         System.out.println("\n");



	 }

}