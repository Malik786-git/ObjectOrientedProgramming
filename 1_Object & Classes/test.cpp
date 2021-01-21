// #include <iostream>
// using namespace std;

// class Number{
// private:
//   int number;



// public:
//   void showData(){
//     int x;
//     cin>>x;
//     if(x<=100){
//     number = x;
//     cout<<number;
//     }
//     else
//     {
//       cout<<"error";
//     }
    
//   }   
// };

// int main()
// {
// Number n1, n2;
// n1.showData();
// return 0;
// }
// ========================================================
// #include <iostream>
// using namespace std;

// class Number{
// private:
//   int number;    //
// public:
//   Number(){
//      number = 0;
//      cout<<number;
//   }
//   void showData(){
   
//    cout<<number;
//   }
// };

// int main()
// {
// Number n1, n2, n3;


//  return 0;
// }
// ===========================================================

// #include <iostream>
// using namespace std;

// class Number{
// private:
//   int number;    //
// public:
//   Number(){
//     cout<<"Ans:"<<number;
//   }
//   ~Number(){

//   }
//   Number(int x){
//     number = x;
//     cout<<"Ans: "<<number<<endl; 
//   }
//   Number(int x, int y){
//      number = x;
//      x = y;
//      cout<<"number"<<number<<endl;
//      cout<<"X"<<x<<endl;
     
//   }

//   void showData(){
   
//    cout<<number;
//   }
// };

// int main()
// {
// Number n1(1), n2(2,3), n3;


//  return 0;
// }
// ===========================================================

//  Object as a Function Argument

// ====================Static=====================================
// object ko belong nhi karta
// dynamically memory leta hy

// #include <iostream>
// using namespace std;

// class Number{
//   static int number;
//   int x;
// public:
//   Number(){

//   }
    
//   void GetData(int n){
//        number++;
//        x = n;
//        cout<<"Input: "<<x<<endl;
//        cout<<"Static: "<<number<<endl;

//   }
// };
//  int Number ::number =0;
// int main()
// {
//     Number n1, n2, n3;
//     n1.GetData(12);
//     n2.GetData(13);
//     n3.GetData(14);
//  return 0;
// }
// =========================================

// #include <iostream>
// using namespace std;

// class Number{
//  private:
//   static int number;
//   int x;
//   public: 
//   Number(){

//   }
    
//   void GetData(int n){
//        number++;
//        x = n;
//        cout<<"Input: "<<x<<endl;
//        cout<<"Static: "<<number<<endl;

//   }
//   static void Static(int n)
//       number = n;
//       cout<<"Static: "<<number<<endl;
      
//   }
// };
//  int Number ::number =0;
// int main()
// {
  
//   Number::Static(45);
 
//  return 0;
// }

// // ==========================book
// const

// #include <iostream>
// using namespace std;

// class Test{
//  const int number;
//  int x;
//  public:
//  Test(int n): number(n){ // Initialize list:
//  }
//   void show(){
//       cout<<"Value: "<<number<<endl;
//   }

// };
// int main()
// {
//  Test t1(4), t2(5);
//  t1.show();
//  t2.show();
  
//  return 0;
// }
// =============================================================

// #include <iostream>
// using namespace std;

// class Test{
//  int number;
//  public:
//  Test(int n): number(n){ // Initialize list:
//  }
//   void show() const{
//       cout<<"Value: "<<number<<endl;
//   }

// };
// int main()
// {
//  const Test t1(4);
//  t1.show();
 
//  return 0;
// }
// ==============================================
//  Copy Constructor

#include <iostream>
using namespace std;

class Test{
 int number;
 public:
 Test(int n){ 
    number = n;
 }
 Test(Test &t){
     number = t.number;
 }
//   void get(int n){
//       number = n;
//   }
  void show(){
      cout<<"Value: "<<number<<endl;
  }

};
int main()
{
 Test t1(5), t2(t1);

 t1.show();
 t2.show();
 
 return 0;
}