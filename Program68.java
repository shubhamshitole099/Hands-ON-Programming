/*

Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input :
C
Output : Your exam at 9.20 AM
Input :
d
Output : Your exam at 10.30 AM 

*/




import java.util.Scanner;

class Demo68
{

    public void DisplayTime(char cVar)
    {
         
        if((cVar)>=97 &&(cVar)<=122)
        {
        	cVar = Character.toUpperCase(cVar);
        }



       switch(cVar)
       {
          
          case 'A' :  

                 System.out.println("\nYour exam at 7 AM");
                 break;
           
         case 'B' : 

                  System.out.println("\nYour exam at 8.30 AM");
                  break;

         case 'C' :

                    System.out.println("\nYour exam at 9.20 AM");
                    break;

         case 'D' :
            
                   System.out.println("\nYour exam at 10.30 AM");
                   break;    


         default :
            
                    System.out.println("\nInvalide Division");                   


       }
    }

}



class Program68
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Division : ");
		char cVal = sobj.next().charAt(0);

		Demo68 dobj = new Demo68();

         dobj.DisplayTime(cVal);
   
         System.out.print("\n");

	}
}

