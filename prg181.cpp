 #include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct node
{
	int data;
	struct node *next;

}NODE,*PNODE,**PPNODE;


class SinglyLL
{
  private:
         PNODE first;
         int size;

  public:

  	     SinglyLL()
  	     {
  	     	first = NULL;
  	     	size = 0;
  	     }

  
       void Display()
     {
       PNODE temp = first;

       cout<<"\n";

        while(temp != NULL)
        {
         cout<<"|"<<temp->data<<"|->";
         temp = temp -> next;
        
        }

        cout<<"NULL"<<"\n";


     }
     
     int Count()
     {
  
       cout<<"\n";
       return size;

     }


     void InsertFirst(int no)
     {
     
       PNODE newn = new NODE; // newm = (PNODE)malloc(sizeof(NODE));
    
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

     void InsertLast(int no)
     {

      PNODE newn = new NODE; // newm = (PNODE)malloc(sizeof(NODE));
    
        newn -> data = no;

        newn -> next = NULL;

        if(first == NULL)
         {
           first = newn;
         }
         else
         {
           PNODE temp = first;

           while(temp -> next != NULL)
           {
            
            temp = temp -> next;

           }
           
           temp -> next = newn;
            

         } 

         size++;

     }

     void InsertAtPos(int no,int iPos)
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
            PNODE newn = new NODE;
            PNODE temp = first;

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

     void DeleteFirst()
     {
        PNODE temp = first;

        if(first != NULL)
        {
           first = first -> next;
           delete temp;  

           size--;  

        }



     }

     void DeleteLast()
     {
          
       PNODE temp = first;

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

     void DeleteAtPos(int iPos)
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
            
            PNODE temp = first;
            PNODE targetted = NULL;

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

   
};



int main()
{

  SinglyLL obj;
  int iRet = 0;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);


  obj.InsertLast(101);
  obj.InsertLast(111);
  obj.Display();

  iRet = obj.Count();

  cout<<"\nNumber of elements are : " <<iRet<<"\n";

   cout<<"\n";

     obj.InsertAtPos(22,3);
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


	return 0;
}

