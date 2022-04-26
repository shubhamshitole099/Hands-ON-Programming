#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE, *PNODE, **PPNODE;



void InsertFirst(PPNODE Head ,int no)
{
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn -> data = no;
   newn -> next = NULL;
   newn -> prev = NULL;

   if(*Head == NULL)
   {

   	*Head = newn;
   
   }
   else
   {
  
    newn -> next =  *Head;
    (*Head) -> prev = newn;
    
    *Head = newn;
     
   } 


}

void InsertLast(PPNODE Head ,int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;

   newn = (PNODE)malloc(sizeof(NODE));

   newn -> data = no;
   newn -> next = NULL;
   newn ->prev = NULL;

   if(*Head == NULL)
   {

   	*Head = newn;
   
   }
   else
   {
   
     while( temp -> next != NULL)
     {
       temp = temp -> next;
     }
     
      temp -> next = newn;
      newn -> prev = temp;

   } 

}

void Display(PNODE Head)
{
	printf("\n");

  while(Head != NULL)
  {
  	printf("|%d|->",Head->data);
  	Head = Head->next;
  }
   
  printf("NULL\n");

}

int Count(PNODE Head)
{
	int iCnt = 0;
	printf("\n");
	while(Head != NULL)
     {
     	iCnt++;
     	Head = Head -> next;
     }

   return iCnt;
}


void DeleteFirst(PPNODE Head)
{
   PNODE temp = *Head;

   if(*Head != NULL)  //LL contains atleas one node tevhch at ya
   {
  
     *Head = (*Head) -> next;
     free(temp);
     if(*Head != NULL)
     {

     (*Head) -> prev = NULL;

    }


   }


}

//or
//---------------------------------------------------------//

// void DeleteFirstX(PPNODE Head)
// {
//   if(*Head == NULL)
//   {
//     return ;

//   }
//   else if((*Head) -> next == NULL)
//   {
//     free(*Head);
//     *Head = NULL;
//   }
//   else
//   {
//     *Head = *Head -> next;
//     free(*Head -> prev);
//     *Head -> prev = NULL;
//   }

// }

//-------------------------------------------------------------//

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

   if(*Head == NULL)
  {
    return ;

  }
  else if((*Head) -> next == NULL)
  {
    free(*Head);
    *Head = NULL;
  }
  else
  {
    while((temp) -> next != NULL)
    {
      temp = temp -> next;
    }

    temp -> prev -> next = NULL;
    free(temp);

  }

}


void InsertAtPos(PPNODE Head , int no , int iPos)
{
  int Size = Count(*Head);
  int i = 0;
  PNODE temp = *Head;
  PNODE newn = NULL;

  if((iPos < 1) || (iPos > Size+1))
  {
    printf("\nInvalide Position");
    return ;
  }

  if(iPos == 1)
  {
    InsertFirst(Head,no);
  }
  else if(iPos == Size + 1)
  {
    InsertLast(Head,no);
  }
  else
  {
  
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;


    for(i = 1; i < iPos-1; i++)
    {
      temp = temp -> next;
    }

    newn -> next = temp -> next;
    newn -> next -> prev = newn;
    temp -> next = newn;
    newn -> prev = temp;

    

  }

}

void DeleteAtPos(PPNODE Head, int iPos)
{

  
  int Size = Count(*Head);
  int i = 0;
  PNODE temp = *Head;

  if((iPos < 1) || (iPos > Size))
  {
    printf("\nInvalide Position");
    return ;
  }

  if(iPos == 1)
  {
    DeleteFirst(Head);
  }
  else if(iPos == Size)
  {
    DeleteLast(Head);
  }
  else
  {

   for(i = 1; i < iPos-1; i++)
    {
      temp = temp -> next;
    }
  
   temp -> next = temp -> next ->next;
   free(temp -> next -> prev);
   temp -> next -> prev = temp;
  
}

}



int main()
{
  
  PNODE first = NULL; 
  int iRet = 0;
  int iPos1 = 0;
  int iPos2 = 0;

   printf("\nEnter Pos : ");
   scanf("%d",&iPos1);
  
      printf("\nEnter delete Pos : ");
     scanf("%d",&iPos2);

  


   InsertFirst(&first,51);
   InsertFirst(&first,21);
   InsertFirst(&first,11);


   InsertLast(&first,101);
   
 
    InsertAtPos(&first,31,iPos1);


 
   DeleteAtPos(&first,iPos2);



   Display(first);
  
  iRet = Count(first);

  printf("\nNumber of elements are : %d",iRet);

  printf("\n");

  
 
  return 0;

}