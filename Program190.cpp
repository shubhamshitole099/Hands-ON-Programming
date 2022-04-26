 #include<iostream>

using namespace std;

template <typename T>
struct node
{
	T data;
	struct node *next;

};


template <class T>
class SinglyLL
{
  private:
         node <T> * first;
         int size;

  public:
         
         SinglyLL();
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
  SinglyLL <T> :: SinglyLL()
         {
          first = NULL;
          size = 0;
         }

   template <class T>
   void SinglyLL <T> :: Display()
       {
          node <T> * temp = first;

       cout<<"\n";

        while(temp != NULL)
        {
         cout<<"|"<<temp->data<<"|->";
         temp = temp -> next;
        
        }

        cout<<"NULL"<<"\n";


     }
      
      template <class T> 
     int SinglyLL <T> :: Count()
     {
  
       cout<<"\n";
       return size;

     }

    template <class T>
     void SinglyLL <T> :: InsertFirst(T no)
     {
     
        node <T> * newn = new  node<T> ; // newm = (struct node *)malloc(sizeof(NODE));
    
        newn -> data = no;

        newn -> next = NULL;

        if(first == NULL)
         {
           first = newn;
         }
         else
         {
           newn -> next = first;
           first = newn;

         } 

         size++;
     }
    
     template <class T>
     void SinglyLL <T> :: InsertLast(T no)
     {

       node<T>* newn = new node<T>; // newm = (struct node *)malloc(sizeof(NODE));
    
        newn -> data = no;

        newn -> next = NULL;

        if(first == NULL)
         {
           first = newn;
         }
         else
         {
            node<T> * temp = first;

           while(temp -> next != NULL)
           {
            
            temp = temp -> next;

           }
           
           temp -> next = newn;
            

         } 

         size++;

     }

     template <class T>
     void SinglyLL <T> :: InsertAtPos(T no,int iPos)
     {
        if((iPos < 1) && (iPos > size+1))
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
            node <T> * newn = new  node <T>;
            node <T> * temp = first;

            newn -> data = no;
            newn -> next = NULL;

            for(int i = 1; i < iPos-1; i++)
            {
              temp = temp -> next;
            }
             
             newn -> next = temp -> next;
             temp -> next = newn;
             size++;  

        }

     }

     template <class T>
     void SinglyLL <T> :: DeleteFirst()
     {
         node <T>* temp = first;

        if(first != NULL)
        {
           first = first -> next;
           delete temp;  

           size--;  

        }



     }

     template <class T>
     void SinglyLL <T> :: DeleteLast()
     {
          
        node <T> * temp = first;

        if(first == NULL)
        {
           return;  

        }
        else if(first -> next == NULL)
        {
          delete first;
          first = NULL;
          size--;
        }
        else
        {
            while(temp -> next -> next != NULL)
            {
                  temp = temp -> next;
            }

           delete temp -> next;
           temp -> next = NULL;
           size--; 

        }

     }

     template <class T>
     void SinglyLL <T> :: DeleteAtPos(int iPos)
     { 
         if((iPos < 1) && (iPos > size+1))
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
            
             node <T>* temp = first;
             node <T> * targetted = NULL;

            for(int i = 1; i < iPos-1; i++)
            {
              temp = temp -> next;
            }
             
              targetted = temp -> next;
              temp -> next = targetted -> next;
              free(targetted);
             size--;  

        }

     }


int main()
{

  SinglyLL <char> obj;
  int iRet = 0;

  obj.InsertFirst('D');
  obj.InsertFirst('B');
  obj.InsertFirst('A');


  obj.InsertLast('E');
  obj.InsertLast('F');
  obj.Display();

  iRet = obj.Count();

  cout<<"\nNumber of elements are : " <<iRet<<"\n";

   cout<<"\n";

     obj.InsertAtPos('C',3);
     obj.Display();

  iRet = obj.Count();

  cout<<"\nNumber of elements are : " <<iRet<<"\n";

   cout<<"\n";

   obj.DeleteFirst();
   obj.DeleteLast();
     
     obj.Display();

    iRet = obj.Count();

  cout<<"\nNumber of elements are : " <<iRet<<"\n";

   cout<<"\n";

   obj.DeleteAtPos(4);
    
    obj.Display();

    iRet = obj.Count();

  cout<<"\nNumber of elements are : " <<iRet<<"\n";

   cout<<"\n";

cout<<"\n////////////////////////////////////////////////////////////\n";

  SinglyLL <float> fobj;
  int iRet1 = 0;

  fobj.InsertFirst(13.5);
  fobj.InsertFirst(11.5);
  fobj.InsertFirst(10.5);


  fobj.InsertLast(14.5);
  fobj.InsertLast(16.5);
  fobj.Display();

  iRet1 = fobj.Count();

  cout<<"\nNumber of elements are : " <<iRet1<<"\n";

   cout<<"\n";

     fobj.InsertAtPos(12.5,3);
     fobj.Display();

  iRet1 = fobj.Count();

  cout<<"\nNumber of elements are : " <<iRet1<<"\n";

   cout<<"\n";

   fobj.DeleteFirst();
   fobj.DeleteLast();
     
     fobj.Display();

    iRet = fobj.Count();

  cout<<"\nNumber of elements are : " <<iRet1<<"\n";

   cout<<"\n";

   fobj.DeleteAtPos(4);
    
    fobj.Display();

    iRet1 = fobj.Count();

  cout<<"\nNumber of elements are : " <<iRet1<<"\n";

   cout<<"\n";


	return 0;
}

