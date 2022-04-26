/*

Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a

*/




import java.util.Scanner;


class Demo71
{
   public void Display(char cVar)
   {  
       System.out.print("\n");

   	  	for(int iCnt = 1; iCnt <= 32; iCnt++)
   	  	{
   	  		if((cVar >= 'A') && (cVar <= 'Z'))
   	  		{
   	  			System.out.print(cVar+"\t");
   	  			cVar++;
   	  		}

   	  		else if((cVar >= 'a') && (cVar <= 'z'))
   	  		{
   	  			System.out.print(cVar+"\t");
   	  			cVar--;
   	  		}
   	  		
   	  	}

   	  	System.out.print("\n");
   	  	
   }
   	 
}



class Program71
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo71 dobj = new Demo71();
        
        dobj.Display(cVal);
    
         System.out.print("\n");

	
	}
}

