#include <iostream>
using namespace std;

//function goes here

int fact(int n)
{
    if(n>1){return n * fact(n-1);}
    else {return 1;}
}


int main()
{
  cout<<"Enter the number:"<<endl;
  int n; cin>>n;
  
  //call function here
  cout<<"The factorial is "<<fact(n)<<endl;
}
