#include<iostream>
using namespace std;
inline double circleArea(double radius){
    return 3.1415 * radius * radius;
}
int main(){
  double radius;
  cout<<"Enter radius of circle: ";
  cin>>radius;
  cout<<"Area of circle: "<<circleArea(radius);
  return 0;
}
