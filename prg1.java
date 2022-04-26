
import java.util.Scanner;


class Sorting
{
    public void BubbleSort(int Arr[])
    {
        int i = 0,j = 0,temp = 0;
        int Size = Arr.length;

        for(i = 0; i < Size; i++)
        {
            
           for(j = 0; j<Size-i-1; j++)
           {
             if(Arr[j] > Arr[j+1])
           
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;

            }
        }
      }   
    }
}








class prg1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the size of array : ");
        int Size =  sobj.nextInt();
     
         int Arr[] = new int[Size];
        
         System.out.println("Enter the elements : ");
         for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
       
        Sorting obj = new Sorting();

        obj.BubbleSort(Arr);

        System.out.print("\nData after Sorting :\n");
        for(int i = 0 ; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
      
        System.out.print("\n"); 


    }
      
       
    
}
