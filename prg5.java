
import java.util.Scanner;


class Sorting
{
    public void InsertionSort(int Arr[])
    {
       int i = 0,j = 0, key = 0;
       int Size = Arr.length;

       for(i = 1; i< Size; i++)
       {

          key = Arr[i];

          for(j = i-1; (j >= 0 ) && (Arr[j] > key); j--)
          {
            Arr[j+1] = Arr[j];
          }
          
          Arr[j+1] = key;

       }

    
    }
}  



class prg5
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

        obj.InsertionSort(Arr);

        System.out.print("\nData after Sorting :\n");
        for(int i = 0 ; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
      
        System.out.print("\n"); 


    }
      
       
    
}
