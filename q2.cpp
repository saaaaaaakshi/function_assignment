/*Write a function that takes the radius of a circle as an argument and returns its area.*/
#include<iostream>
using namespace std;
float area_of_circle(int r){
    float area=3.14*r*r;
    return area;
}
int main(){
  int r;
  cout<<"enter radius of circle:";
  cin>>r;
  cout<<"area of circle is:"<<area_of_circle(r);
  return 0;
}
