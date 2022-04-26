#include<iostream>

using namespace std;


typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;

}NODE,*PNODE;

class DoublyCircularLL
{
   private:

   	       PNODE first;
   	       PNODE last;
   	       int size;

    public: 

    	    DoublyCircularLL()
    	    {
    	    	first = NULL;
    	    	last = NULL;
    	    	size = 0;
    	    }

          void Display();
          int Count();

         void InsertFirst(int);
         void InsertLast(int);
         void InsertAtPos(int,int);

         void DeleteFirst();
         void DeleteLast();
         void DeleteAtPos(int);


};

void DoublyCircularLL :: Display()
{
   cout<<"\n";
   
   PNODE temp = first;

   for(int i = 1; i <= size; i++)
   {
     cout<<"|"<<temp -> data <<"|->";
     temp = temp -> next;
   } 

   cout<<"\n";

}

int DoublyCircularLL :: Count()
{
   return size;
}


void DoublyCircularLL :: InsertFirst(int no)
{ 
  PNODE newn = new NODE;

  newn -> data = no;
  newn -> next = NULL;
  newn -> prev = NULL;

  if((first == NULL) && (last == NULL))
  {
  	first = newn;
  	last = newn; 
  }
  else
  {
  	newn -> next = first;
  	first -> prev = newn;
    first = newn;
  
  }

  last -> next = first;
  first -> prev = last;
  size++;
 
}

void DoublyCircularLL :: InsertLast(int no)
{
  PNODE newn = new NODE;

  newn -> data = no;
  newn -> next = NULL;
  newn -> prev = NULL;

  if((first == NULL) && (last == NULL))
  {
  	first = newn;
  	last = newn; 
  }
  else
  {
  	last -> next = newn;
  	newn -> prev = last;
  	last = newn;
  }
   
  last -> next = first;
  first -> prev = last;
  size++;
 
	
}

void DoublyCircularLL :: InsertAtPos(int no,int iPos)
{
	if((iPos < 1) || (iPos > size+1))
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

		newn -> data = no;
		newn -> next = NULL;
		newn -> prev = NULL;

		PNODE temp = first;

		for(int i = 1; i < iPos-1; i++)
		{
			temp = temp -> next;
		} 

		 newn -> next = temp -> next;
		 temp -> next -> prev = newn;      // or newn -> next -> prev  = newm; 
		 temp -> next = newn;
		 newn -> prev = temp;

		 size++;

	}


}

void DoublyCircularLL :: DeleteFirst()
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
   first -> prev = last;
    
  }

 
   size--;
	
}

void DoublyCircularLL :: DeleteLast()
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
     last = last -> prev;
     delete last -> next;

   last -> next = first; 
   first -> prev = last;

  }
   size--;
	
}

void DoublyCircularLL :: DeleteAtPos(int iPos)
{
   if((iPos < 1) || (iPos > size))
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

		for(int i = 1; i < iPos-1; i++)
		{
			temp = temp -> next;
		} 
          
          temp -> next = temp -> next -> next;

          delete temp -> next -> prev;

          temp -> next -> prev = temp; 

	    
		     size--;

	}

	
}


int main()
{
 
  DoublyCircularLL obj;

  int iRet = 0;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  obj.Display();
  
  iRet = obj.Count();
  cout<<"\nNumber of elements are : "<<iRet;
  cout<<"\n";

  obj.InsertLast(101);
  obj.InsertLast(201);
  

  obj.Display();

  iRet = obj.Count();
  cout<<"\nNumber of elements are : "<<iRet;
  cout<<"\n";

   obj.DeleteFirst();

  obj.Display();
 

  iRet = obj.Count();
  cout<<"\nNumber of elements are : "<<iRet;
  cout<<"\n";
  
  obj.DeleteLast();


  obj.Display();

  iRet = obj.Count();
  cout<<"\nNumber of elements are : "<<iRet;
  cout<<"\n";
 

   obj.InsertAtPos(22,3);


  obj.Display();

  iRet = obj.Count();
  cout<<"\nNumber of elements are : "<<iRet;
  cout<<"\n";
 
  
  obj.DeleteAtPos(2);

  
  obj.Display();

  iRet = obj.Count();
  cout<<"\nNumber of elements are : "<<iRet;
  cout<<"\n";
  
	return 0;
}