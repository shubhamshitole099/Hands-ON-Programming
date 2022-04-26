#include<iostream>
using namespace std;

typedef struct node
{
	int data;

	struct node *lchild;
	struct node *rchild;

}NODE,*PNODE,**PPNODE;



void Insert(PPNODE Head , int no)
{
  PNODE newn = new NODE;
  
   newn -> data = no;
   newn -> lchild = NULL;
   newn -> rchild = NULL;


   if(*Head == NULL)
   {
    
     *Head = newn;

   }
   else
   {
      PNODE temp = *Head;

      while(1)                    // Unconditional loop  for( ;; )
      {
        
         if(temp -> data == no)
         { 
            cout<<"\nDuplicate Node\n";
            delete newn;
         	break;

         }
         else if(no < (temp -> data))    // small Data go left;
         {
            
            if(temp -> lchild == NULL)
            {
            	temp -> lchild = newn;
            	break;
            } 
             
             temp = temp -> lchild;

         }
         else if(no > (temp -> data))    // big Data go right
         { 
         	if(temp -> rchild == NULL)
         	{
         		temp -> rchild = newn;
         		break;
         	}

         	temp = temp -> rchild;
         }

      }

   }
  
}



bool Search(PNODE Head,int no)
{
  bool Flag = false;
  
  if(Head == NULL)   // if tree is empty
  {
  	return Flag;
  }
  else               // tree contains one node
  { 

  	while(Head != NULL)
  	{
  		if(Head -> data == no)     // node milala 
  	    {
  	    	 Flag = true;
  	    	 break;
 
  	    }
  	    else if(no > (Head -> data))
  	    {

           Head = Head -> rchild;

  	    }
  	    else if(no < (Head -> data))
  	    {

           Head = Head -> lchild;

  	    }
      

  	}
   
    return Flag;
  }


}


int Count(PNODE Head)
{
 
   static int iCnt = 0;

   if(Head != NULL)
   {
      iCnt++;

      Count(Head->lchild);
      Count(Head -> rchild);

   }

    return iCnt;
}

int CountLeaf(PNODE Head)
{
 
   static int iCnt = 0;

   if(Head != NULL)
   {
      
       if((Head -> lchild == NULL) && (Head -> rchild == NULL))
       {
        
        iCnt++;

       }

      CountLeaf(Head->lchild);
      CountLeaf(Head -> rchild);

   }

    return iCnt;
}

int CountParrent(PNODE Head)
{
 
   static int iCnt = 0;

   if(Head != NULL)
   {
      
       if((Head -> lchild != NULL) || (Head -> rchild != NULL))
       {
        
        iCnt++;

       }

      CountParrent(Head->lchild);
      CountParrent(Head -> rchild);

   }

    return iCnt;
}



void DisplayInOrder(PNODE Head)    // LDR
{
 
  
   if(Head != NULL)   
   {
     
      cout<<"\n";

      DisplayInOrder(Head->lchild);  // L
      cout<<Head -> data<<"\t";   // D
      DisplayInOrder(Head -> rchild); // R

   }

}






int main()
{
  PNODE first = NULL;
  bool bRet = false;
  int iNo = 0;
  int iRet1 = 0;
 

  Insert(&first,51);
  Insert(&first,21);
  Insert(&first,101); 

   cout<<"\nEnter Number To Search : ";
   cin>>iNo;

  bRet = Search(first,iNo);

  if(bRet == true)     
  {
    cout<<"\nNumber is present"<<"\n";
  }
  else                 
  {
     
     cout<<"\nNumber is absent"<<"\n";

  }

  iRet1 = Count(first);

  cout<<"\nNumber Of Nodes Are : "<<iRet1;
  cout<<"\n";

 int iRet2 = CountLeaf(first);

 cout<<"\nNumber of Leaf Nodes Are : "<<iRet2;
 cout<<"\n"; 


 int iRet3 = CountParrent(first);

 cout<<"\nNumber of Parrents Nodes Are : "<<iRet3;
 cout<<"\n"; 

 DisplayInOrder(first);

 return 0;

}