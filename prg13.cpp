/*

Write a c++ program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35

*/


#include<iostream>
using namespace std;


void DisplayRange(int iStart,int iEnd)
{

  int i = iStart;

  cout<<"\n";

  while(i <= iEnd)
  {
  	cout<<i<<"\t";

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

DisplayRange(iVal1,iVal2);

cout<<"\n";

return 0;


}
