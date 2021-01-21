// // BINARY operator 
// #include<iostream>
// using namespace std;

// class Complex
// {
// private:
//  int a;
//  int b;

// public:
//   void setNumber(int x, int y){
//       a = x;
//       b = y;
//   }
//   void showNumber(){
//       cout<<"Number = ( "<<a<<" , "<<b<<" ) "<<endl;
//   }
//   friend Complex operator+(Complex, Complex);    //binary operator friend function
// };
// Complex operator+(Complex obj1 , Complex obj2){
//    Complex temp;
//    temp.a = obj1.a + obj2.a;
//    temp.b = obj1.a + obj2.a;
//    return temp;
// }
// int main(){

// cout<<endl<<endl;

//      Complex c1, c2, c3;
//      c1.setNumber(10,11);
//      c1.showNumber();

//      c2.setNumber(10,9);
//      c2.showNumber();
 
//      c3 = c1 + c2;   // Or c3 = operator+(c1,c2)
//      c3.showNumber(); 


// cout<<endl<<endl;
//     return 0;
// }
////////////////////////////////////////////////////////////////////////
// UNARY OPERATOR 
#include<iostream>
using namespace std;

class Complex
{
private:
 int a;
 int b;

public:
  void setNumber(int x, int y){
      a = x;
      b = y;
  }
  void showNumber(){
      cout<<"Number = ( "<<a<<" , "<<b<<" ) "<<endl;
  }
  friend Complex operator-(Complex);    //binary operator friend function
};
Complex operator-(Complex obj){
   Complex temp;
   temp.a = -obj.a;
   temp.b = -obj.b;
   return temp;
}
int main(){

cout<<endl<<endl;

     Complex c1, c2, c3;
     c1.setNumber(10,11);
     c1.showNumber();

     c2.setNumber(10,9);
     c2.showNumber();
 
     c3 = -c1;   // Or c3 = operator+(c1,c2)
     c3.showNumber(); 

cout<<endl<<endl;
    return 0;
}
