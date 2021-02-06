#include <iostream>
using namespace std;
class area{
  public:
   double Area(double r){
     return 3.14*r*r;
   }
    double Area(double a,double b){
      return 0.5*a*b;
    }
    double Area(int a, int b){
      return a*b;
    }
   double Area(int side){
     return side*side;
   }
 };
int main(){
  area a;
  char s;
  cout<<"\nEnter c(for circle), t(for triangle), s(for square), r(for rectangle): ";
  cin>>s;
 switch(s)
 {
   case 'c':
   double r;
   cout<<"Enter the radius for circle: ";
   cin>>r;
   cout<<"Area of circle with radius "<<r<<" is "<< a.Area(r)<<"\n";
  break;
  case 't':
   double b,h;
   cout<<"Enter the base and height for triangle: ";
   cin>>b>>h;
   cout<<"Area of triangle with base "<<b<<" and height "<<h<<" is "<< a.Area(b,h)<<"\n";
  break;
   case 'r':
   int len,br;
   cout<<"Enter the length and breadth for rectangle: ";
   cin>>len>>br;
   cout<<"Area of rectangle with length "<<len<<" and breadth "<<br<<" is "<< a.Area(len,br);
  break;
  case 's':
   int side;
   cout<<"Enter the side for square: ";
   cin>>side;
   cout<<"Area of square with side "<<side<<" is "<< a.Area(side)<<"\n";
  break;
  default:
  cout<<"Invalid character\n";
 } 
 return 0; 
}