/*
Write a function to print squares of first n natural numbers, taking n as argument to the function
*/
#include<iostream>
using namespace std;
int squares(int n){
    int sqr;
   for(int i=1;i<=n;i++){
      sqr=i*i;
      cout<<sqr<<endl;
   }
   return 0;
}
int main(){
  int n;
  cout<<"enter n:";
  cin>>n;
  cout<<"squares of first n natural nums are:"<<squares(n);
  return 0;
}