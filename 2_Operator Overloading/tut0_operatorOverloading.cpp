                        //////////////////////////
                       // Operator Overloading //
                      //////////////////////////
// simple code without operator overloading

// #include<iostream>
// using namespace std;
// class Test{
//   private:
//   int a,b;
//   public:
//   void Get(int x , int y){
//       a = x;
//       b = y;
//   }
//   void Show(){
//       cout<<"T = ("<<a<<","<<b<<")"<<endl;
      
//   }
//   Test add(Test t){
//       Test temp;
//        temp.a = a+ t.a;
//        temp.b = b + t.b;
//       return temp; 
//   }
// };

// int main(){

// Test t1, t2, t3;
// t1.Get(3,4);
// t2.Get(1,2);
// t3 = t1.add(t2);
// t3.Show();


//     return 0;
// }
// ================================================================
//   Apply operator  as a function to clear syntax(operator overloading) 
#include<iostream>
using namespace std;
class Test{
  private:
  int a;
  float b;
  public:
  Test(){}
  Test(int x, float y): a(x), b(y){}
  void Get(int x , float y){
      a = x;
      b = y;
  }
  void Show(){
      cout<<"T = ("<<a<<","<<b<<")"<<endl;
      
  }
  Test operator + (Test) const;
};
  Test Test::operator + (Test t) const{
     int n1 = a + t.a;
     float n2 = b + t.b;
        // n1 = a + t.a;
      //  n2 = b + t.b;
      return Test(n1,n2); 
  }

int main(){

Test t1, t2(1,1.2), t3;
t1.Get(3,4.1);

t3 = t1.operator+(t2);
// t3 = t1 + t2;                         //In binary operator (t1 is caller and t2 argument, )
t3.Show();

    return 0;
}
// In above code we use + to call my object add and also simple plus operator to add two int number like 5+5 = 10 
//   Definition: When one operator perform multiple job its called operator overloading
// In above code it is binary overloading because obj call operator fun and pass argument as argument 
// left side call object and left side argument

// ==================================================================================
//       Comparision Operator

// #include<iostream>
// using namespace std;
// class Test{
//   private:
//   int a,b;
//   public:
//   void Get(int x , int y){
//       a = x;
//       b = y;
//   }
//   void Show(){
//       cout<<"T = ("<<a<<","<<b<<")"<<endl;
      
//   }
//   Test operator>(Test t){
//       int x, y;
//        x = a > t.a;
//        y = b > t.b;
//       return Test(x,y); 
//   }
// };

// int main(){

// Test t1, t2, t3;
// t1.Get(3,4);
// t2.Get(5,2);
// // t3 = t1.operator+(t2);
// t3 = t1 > t2;                         //In binary operator (t1 is caller and t2 argument, )
// t3.Show();

//     return 0;
// // }


// =================================================================
// #include<iostream>
// using namespace std;
// class Test{
//   private:
//   int a;
//   public:
//   void Get(int n){
//       a = n;
//   }
//   void Show(){
//       cout<<"Greater Number: "<<a<<endl;
      
//   }
//   bool operator>(Test t){
//    int x = a;
//    int y = t.a;
//      return (x > y)? true : false;                              
//   }
// };

// int main(){
// Test t1, t2;
// t1.Get(8);
// t2.Get(5);
// if( t1 > t2){
//       cout<<"T1 Greater";
// }                         //In binary operator (t1 is caller and t2 argument, )

//     return 0;
// }
