
import java.util.Scanner;


class Sorting
{
    public void BubbleSort(int Arr[])
    {
        int pass  = 0,j = 0,temp = 0;
        boolean flag = false;
        int Size = Arr.length;

        for(pass = 0; flag = true ; (pass < Size); &&(flag = true); pass++)
        {
            flag = false;
           for(j = 0; j<Size-pass-1; j++)
           {
             if(Arr[j] > Arr[j+1])
           
            {   
                flag = true;
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;

            }

            if(flag == false)
            {
                break;
            }

            // System.out.println("\nData after Pass : "+ pass+1);
            // for(int i = 0; i<Arr.length; i++)
            // {
            //     System.out.print(Arr[i]+"\t");
            // }
        }
      }   
    }
}



class prg3
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
