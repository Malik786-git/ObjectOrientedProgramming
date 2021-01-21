                         ///////////////////////////
                        //// Static Data Class ////
                       ///////////////////////////
// object ko belong nhi karta
// dynamically memory leta hy

// #include <iostream>
// using namespace std;
// class Account{
//   float roi = 0; //static or class member variable
//  public:
//  Account(){
//      roi++;
//  }
//   void show(){
//      cout<<"Rate Of Interest: "<<roi<<endl;
//   }


// };
// //  float Account:: roi=0;
// int main(){
//    Account a1, a2, a3;
//    a1.show();
//    a2.show();
//    a3.show();


//     return 0;
// }



// -------------------------Book-----------------------------------
// #include <iostream>
// using namespace std;
// ////////////////////////////////////////////////////////////////
// class foo
// {
// private:
//  static int count; //only one data item for all objects
// //note: “declaration” only!
// public:
// foo() //increments count when object created
// { count++; }
// int getcount() //returns count
// { return count; }
// };
// //--------------------------------------------------------------
//  int foo::count = 0; //*definition* of count
// ////////////////////////////////////////////////////////////////
// int main()
// {
//  foo f1,f2,f3;     //create three objects
// cout << "count is " << f1.getcount() << endl; //each object
// cout << "count is " << f2.getcount() << endl; //sees the
// cout << "count is " << f3.getcount() << endl; //same value
// return 0;
// }
// memory over write hugi !
  
// =====================Static Member Function===================================
// #include <iostream>
// using namespace std;
// class Account{
// public:
//  static int roi; //static or class member variable
//   void show(){
//      cout<<"Rate Of Interest: "<<roi<<endl;
//   }
// };
//  int Account:: roi = 0;
// int main(){
//    Account a1, a2, a3;
//    Account::roi=4;
//    a1.show();
//    a2.show();
//    a3.show();
//     return 0;
// }
// declaretion of static member function 
// #include <iostream>
// using namespace std;
// class Account{
//  static int roi; //static or class member variable
// public:
//   void show(){
//      cout<<"Rate Of Interest: "<<roi<<endl;
//   }
//   static void set(int n){
//       roi = n;
//   }
// };
//  int Account:: roi = 0;
// int main(){
//    Account a1, a2, a3;
// //    a1.set(5);
//    Account::set(6);
 
//    a1.show();
//    a2.show();
//    a3.show();
//     return 0;
// }
