#include<iostream>
#include<stdio.h>
using namespace std;


typedef struct node
{
	int data;
	struct node * next;
	
}NODE,* PNODE ,**PPNODE;


void InsertFirst(PPNODE Head,int no)
{
	PNODE newm = NULL;
	newm = (PNODE)malloc(sizeof(NODE));

	newm -> data = no;
	newm -> next = NULL;

	if(*Head == NULL)
	{
		*Head = newm;
	}
	else
	{
		newm -> next = *Head;
		*Head = newm;
	}

}

void DisplayR(PNODE Head)
{
   if(Head != NULL)
   {
   	  cout<<"|"<<Head -> data <<"|->";

   	  Head = Head -> next;

   	  DisplayR(Head);
   }
    
}


int CountR(PNODE Head)
{ 
	static int i = 0;
   if(Head != NULL)
   {
   	   i++;

   	  Head = Head -> next;

   	  CountR(Head);
   }
    
    return i;

}


int main()
{ 
	PNODE first = NULL;
	int iRet = 0;

	InsertFirst(&first,51);
	InsertFirst(&first,31);
    InsertFirst(&first,21);
	InsertFirst(&first,11);

	DisplayR(first);

	iRet = CountR(first);

	cout<<iRet;

   
 

	return 0;
}