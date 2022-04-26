/*

Write a C++ program which accept range from user and display all even numbers in
between that range.

Input : 23 35
Output : 24 26 28 30 32 34

*/



#include<iostream>
using namespace std;


void DisplayEven(int iStart,int iEnd)
{

  int i = iStart;

  cout<<"\n";

  while(i <= iEnd)
  {
  	 
    if((i % 2)== 0)
    {
     
     cout<<i<<"\t";
    
    }


  	i++;

  }


}


int main()
{

int iVal1 = 0;
int iVal2 = 0;

cout<<"\nEnter starting point : ";
cin>>iVal1;

cout<<"\nEnter ending point : ";
cin>>iVal2;

DisplayEven(iVal1,iVal2);

cout<<"\n";

return 0;


}
