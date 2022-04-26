
import java.util.Scanner;


class Sorting
{
    public void SelectionSort(int Arr[])
    {
       int i = 0, j = 0, minindex = 0 , temp = 0;
       int Size = Arr.length;
       
       for(i = 0; i < Size; i++)
       {
         minindex = i;
        for(j = i; j < Size; j++)
        {
             if(Arr[minindex] > Arr[j])
             {
                minindex = j;
             }

        }
    
        temp = Arr[i];
        Arr[i] = Arr[minindex];
        Arr[minindex] = temp;
      }
    
    }
}  



class prg4
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

        obj.SelectionSort(Arr);

        System.out.print("\nData after Sorting :\n");
        for(int i = 0 ; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
      
        System.out.print("\n"); 


    }
      
       
    
}
