#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;



void InsertFirst(PPNODE Head , int no)
{

  PNODE newn = NULL;

  
  //Step1 : ALLOCATE THE MEMORY.

  newn =(PNODE)malloc(sizeof(NODE));  

  //Step2 : INITIALIZE THE NODE.

  newn-> data = no;
  newn-> next = NULL;

  //Step3 : INSERT THE NODE.

  if(*Head == NULL) //LL IS EMPTY.
  {
  
    *Head = newn;

  }
  else // LL CONTAINS ATLEAST ONE NODE.
  {
   
    newn-> next = *Head;

   *Head = newn;
  
  }

}

void InsertLast(PPNODE Head , int no)
{

  PNODE newn = NULL;

  PNODE temp = *Head;  //  HEAD CHI COPY KARUN THEVA.

  
  //Step1 : ALLOCATE THE MEMORY.

  newn = (PNODE)malloc(sizeof(NODE)); 

  //Step2 : INITIALIZE THE NODE.

  newn-> data = no;
  newn-> next = NULL;
  
  //Step3 : INSERT THE NODE.

   if(*Head == NULL) //LL IS EMPTY.
  {
  
    *Head = newn;

  }
  else // LL CONTAINS ATLEAST ONE NODE.
  {
   
     while(temp->next != NULL)
     {
        temp = temp->next;

     } 
    
    temp-> next = newn;

  }
    
}


void Display1(PNODE Head)
{

   printf("\n");  

   while(Head != NULL)
   {
  
     printf("%d \t",Head->data);
     Head = Head-> next;
     
   }

}

int Count1(PNODE Head)
{

   int iCnt = 0;

   printf("\n");  

   while(Head != NULL)
   {
     iCnt++;
     Head = Head->next;
     
   }
  
  return iCnt;
 
}


void DeleteFirst(PPNODE Head)
{
   PNODE temp = *Head;
    
    printf("\n");

  if(*Head != NULL)  // if LL contains atleast one node.
  {
    
    *Head = (*Head)->next;
    free(temp);
     

  }

}

void DeleteLast(PPNODE Head)
{
   PNODE temp = *Head;

  if(*Head == NULL)  //  LL is empty
  {
    
   return ;

  }

  else if((*Head) -> next == NULL)  // LL contains one node
  {
    free(*Head);
   
    *Head = NULL;

  }
  else      // LL contains more than one node.
  {
     
     while(temp -> next -> next != NULL)
     {
        temp = temp -> next;
     }

    free(temp -> next);

    temp -> next = NULL;

  }

}


void Display2(PNODE Head)
{

   printf("\n");  

   while(Head != NULL)
   {
  
     printf("%d \t",Head->data);
     Head = Head-> next;
     
   }

}

int Count2(PNODE Head)
{
  
   int iCnt = 0;

   printf("\n");  

   while(Head != NULL)
   {
     iCnt++;
     Head = Head->next;
     
   }
  
  return iCnt;
 
}


int main()
{
  
  PNODE first = NULL;
  int iRet1 =0;
  int iRet2 = 0;

 InsertFirst(&first,101); // InsertFirst(50,11);
 InsertFirst(&first,51);  // InsertFirst(50,51);
 InsertFirst(&first,21); // InsertFirst(50,21);
 InsertFirst(&first,11); // InsertFirst(50,11);

 InsertLast(&first,111); //InsertLast(50,11);

  Display1(first);  // Display(100);

  iRet1 = Count1(first); // Count(100);

  printf("\nNumber of elements are : %d",iRet1);

  DeleteFirst(&first); //DeleteFirst(50);
  DeleteLast(&first); //DeleteLast(50);

    Display2(first);  // Display(100);

  iRet2 = Count2(first); // Count(100);

   printf("\nNumber of elements are : %d",iRet2);


  printf("\n");

  return 0;  

}


