#include<iostream>

using namespace std;

template <typename T>
struct node
{
	 T data;
     struct node *next;

};

template <class T>
class SinglyCircularLL
{

	private :

	         node <T> * first;
	         node <T> * last;
	         int size;


	public : 
  
             SinglyCircularLL();

             void Display();
             int Count();

             void InsertFirst(T);
             void InsertLast(T);
             void InsertAtPos(T,int);

             void DeleteFirst();
             void DeleteLast();
             void DeleteAtPos(int);

};
       

       template <class T>
       SinglyCircularLL <T> :: SinglyCircularLL()
          {
            first = NULL;
            last = NULL;
            size = 0;

          }


      template <class T>
    void SinglyCircularLL <T> ::  Display()
      { 
         node <T> * temp = first;

         printf("\n");

         if((first == NULL) && (last == NULL))
         {
            return;
         }

         do
         {
            cout<<"|"<<temp -> data <<"|-> ";
            temp = temp -> next;
         }
         while(temp != last->next);

         cout<<"\n";

      }

    
      template <class T>
      int SinglyCircularLL <T> :: Count()
      {
        return size;
      }

      
      template <class T>
    void SinglyCircularLL <T> :: InsertFirst(T no)
      {
        
         node <T> * newn = new node <T>;

        newn -> data = no;
        newn -> next = NULL;
        
         if((first == NULL) && (last == NULL))
         {
            first = newn;
            last = newn;
         }
         else
         {
            newn -> next = first;
            first = newn;
         }

          last -> next = first;
          size++;

      }

      
      template <class T>
    void SinglyCircularLL <T> :: InsertLast(T no)
      {
         
        node <T> * newn = new node <T>;

        newn -> data = no;
        newn -> next = NULL;
        
         if((first == NULL) && (last == NULL))
         {
            first = newn;
            last = newn;
         }
         else
         { 
           
            last -> next = newn;
            last = newn;
            
         }

         last -> next = first; 
         size++;


      }

      
      template <class T>
      void SinglyCircularLL <T> :: InsertAtPos(T no , int iPos)
      {
        if((iPos < 1) || (iPos>(size+1)))
           {
              return;

           }

           if(iPos == 1)
           {
              InsertFirst(no);
           }
           else if(iPos == size+1)
           {
             InsertLast(no);
           }
           else
           {
               node <T> * newn = new node <T>;
               node <T> * temp = first;

               newn -> data = no;
               newn -> next = NULL;

               for(int i = 1; i < iPos -1; i++)
               {
                temp = temp -> next;
               }

                newn -> next = temp -> next;
                temp -> next = newn;

                size++;

           }

      }

      
      template <class T>
      void SinglyCircularLL <T> :: DeleteFirst()
      {

        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;

            first = NULL;
            last = NULL;

        }
        else
        { 

           first = first -> next;

           delete last -> next;

           last -> next = first;    

        }
         
         size--;


      } 


      template <class T>
    void SinglyCircularLL <T> :: DeleteLast()
      { 
         node <T> * temp = first;

        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;

            first = NULL;
            last = NULL;

        }
        else
        { 
            while(temp -> next != last)
            {
              
              temp = temp -> next;

            }

            delete last;

            last = temp;

            last -> next = first;
                          
        }

       size--;  
         
      }

     
      template <class T>
     void SinglyCircularLL <T> :: DeleteAtPos(int iPos)
      {  
        node <T> * temp = first;
        

  
        if((iPos < 1) || (iPos>size))
           {
              return;

           }

           if(iPos == 1)
           {
              DeleteFirst();
           }
           else if(iPos == size)
           {
             DeleteLast();
           }
           else
           {
              for(int i = 1; i < iPos -1; i++)
              {
                 
                 temp = temp -> next;  

              }

               node <T> * targetted = temp -> next;

               temp -> next = targetted -> next;

               delete targetted;

               size--;

           }

      }





int main()
{
    
   int iRet = 0;
   int iRet1 = 0;

	SinglyCircularLL <int> obj;

	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);


	obj.InsertLast(101);

	obj.InsertAtPos(231,3);


	obj.Display();

	iRet = obj.Count();
	cout<<"\nNumber of elements are : "<<iRet;

	  cout<<"\n";


     obj.DeleteFirst();
     obj.DeleteLast();

   	
  

    obj.Display();
	iRet = obj.Count();
	cout<<"\nNumber of elements are : "<<iRet;


   cout<<"\n";


	obj.DeleteAtPos(2);

    obj.Display();
	iRet = obj.Count();
	cout<<"\nNumber of elements are : "<<iRet;
    cout<<"\n";
   
cout<<"\n--------------------------------------------------------------------\n";

SinglyCircularLL <char> Cobj;

    Cobj.InsertFirst('D');
    Cobj.InsertFirst('B');
    Cobj.InsertFirst('A');


    Cobj.InsertLast('E');

    Cobj.InsertAtPos('C',3);


    Cobj.Display();

    iRet1 = Cobj.Count();
    cout<<"\nNumber of elements are : "<<iRet1;

      cout<<"\n";


     Cobj.DeleteFirst();
     Cobj.DeleteLast();

    
  

    Cobj.Display();
    iRet1 = Cobj.Count();
    cout<<"\nNumber of elements are : "<<iRet1;


   cout<<"\n";


    Cobj.DeleteAtPos(2);

    Cobj.Display();
    iRet1 = Cobj.Count();
    cout<<"\nNumber of elements are : "<<iRet1;
    cout<<"\n";


   return 0;

}

