#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;

}NODE,*PNODE,**PPNODE;


void Display(PNODE Head , PNODE Tail)
{
  
  printf("\n");

  if((Head == NULL) && (Tail == NULL))
  {
  	return;
  }

  do
   {
   	 printf("|%d| ->",Head -> data);
   	 Head = Head -> next;
   }
   while(Head != Tail -> next);

   printf("\n");

}

int Count(PNODE Head,PNODE Tail)
{

   int iCnt = 0;


  if((Head == NULL) && (Tail == NULL))
  {
  	return 0;
  }

  do
   {
   	 iCnt++;
   	 Head = Head -> next;
   }
   
   while(Head != Tail -> next);

    return iCnt;
   
}

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = no;
	newn -> next = NULL;

	if((*Head == NULL) && (*Tail == NULL)) // LL is empty
	{
		*Head = newn;
		*Tail = newn;

	}
	else
	{
		 newn -> next = *Head;
		 *Head = newn;
		
	}

	(*Tail) -> next = *Head;   // to maintain circular nature


}

void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
  
  PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = no;
	newn -> next = NULL;

	if((*Head == NULL) && (*Tail == NULL)) 
	{
		*Head = newn;
		*Tail = newn;

	}
	else
	{ 
		(*Tail) -> next = newn;

		*Tail = newn;
		 
		
	}

	(*Tail) -> next = *Head;
	
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int iPos)
{
  PNODE newn = NULL;
  PNODE temp = *Head;
  int i = 0;
  int Size = Count(*Head,*Tail);

  if((iPos < 1) || (iPos > Size+1))
  {
  	return;
  }
  
  if(iPos == 1)
  {
  	InsertFirst(Head,Tail,no);
  }
  else if(iPos == Size+1)
  {
  	InsertLast(Head,Tail,no);
  }
  else
  {
  	newn = (PNODE)malloc(sizeof(NODE));

  	newn -> data = no;
  	newn -> next = NULL;


     for(i = 1 ; i < iPos-1; i++)
     { 
         
         temp = temp -> next;
 
     }

      newn -> next  = temp -> next;
      temp -> next = newn;

      (*Tail) -> next = *Head;

  }
	
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);

		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
		*Head = (*Head) -> next;
		free((*Tail) -> next);
		(*Tail) -> next = *Head;
	}

	
	
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
   PNODE temp = *Head;
  
  if((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);

		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
       
      while(temp -> next != *Tail)
      {
      	temp = temp -> next;
      }

      free(*Tail);

      *Tail = temp;

      (*Tail) -> next = *Head; 

	}
	
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
   PNODE temp = *Head;
   PNODE targetted = NULL;
  int i = 0;
  int Size = Count(*Head,*Tail);

  if((iPos < 1) || (iPos > Size+1))
  {
  	return;
  }
  
  if(iPos == 1)
  {
  	DeleteFirst(Head,Tail);
  }
  else if(iPos == Size)
  {
  	DeleteLast(Head,Tail);
  }
  else
  {
  	
     for(i = 1 ; i < iPos-1; i++)
     { 
         
         temp = temp -> next;
 
     }
     
      targetted = temp -> next;
      temp -> next = targetted -> next;
      free(targetted);
      
      (*Tail) -> next = *Head;

  }
	
}



int main()
{
  PNODE first = NULL;
  PNODE last = NULL;

  int iRet = 0;


   InsertFirst(&first,&last,51);
   InsertFirst(&first,&last,21);
   InsertFirst(&first,&last,11);

   InsertLast(&first,&last,101);

   InsertAtPos(&first,&last,22,3);

   DeleteFirst(&first,&last);

   DeleteLast(&first,&last);

   DeleteAtPos(&first,&last,2);

   Display(first,last);

   iRet = Count(first,last);

   printf("\nNumber of elements are : %d",iRet);

   printf("\n");
  

	return 0;
}