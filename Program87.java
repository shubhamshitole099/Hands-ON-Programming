/*

Write a program which accept string from user and count number of
white spaces

Input : MarvellouS

Output : 0

Input : MarvellouS Infosystems

Output : 1

Input : MarvellouS Infosystems by Piyush Manohar Khairnnar

Output : 5

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

class Demo87 extends StringX
{

    public int CountSpace()
    {
   
          char Arr[] = str.toCharArray(); 
          int iCnt = 0;

           for(int i = 0; i< Arr.length; i++)
           {
                
                if(Arr[i] == ' ')
                {
                	iCnt++;
                }

               

           }


        return iCnt;

    }


}



class Program87
{
	 public static void main(String[] args) 
	 {
	  
         Demo87 dobj = new Demo87();

         dobj.Accept();

         int iRet =  dobj.CountSpace();
    
          System.out.println("\nCount Of White Spaces Is : "+iRet);
       

         System.out.println("\n");



	 }

}
