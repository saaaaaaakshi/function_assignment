/*Given two numbers a and b, write a function to print all odd numbers between them.*/
#include<iostream>
using namespace std;
int odd_nums(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}
int main(){
  int a,b;
  cout<<"enter a:";
  cin>>a;
  cout<<"enter b:";
  cin>>b;
  cout<<"odd nums in between a and b are:"<<odd_nums(a,b);
  return 0;
}