                         ///////////////////////////////
                        ////Const Handeling in OOPs////
                       ///////////////////////////////


////////////////////////////////////////////////////////////////////
// 1. Const Data Member Must Use Initialize list: 

// #include <iostream>
// using namespace std;
// class Test // 
// {
//     const int number;
//     public:
//     Test(int n): number(n)//Initializer list must be used 
//     {    }

//     void showNum(){
//          cout<<"Number: "<<number<<endl; 
//     }
// };
// int main()
// {
//    Test n1(4);
//    n1.showNum();

// return 0;
// }
////////////////////////////////////////////////////////////////////
// 2. For initialization of reference members:

// #include<iostream> 
// using namespace std; 

// class Test { 
// 	int &t; 
// public: 
// 	Test(int &t):t(t) {} //Initializer list must be used 
// 	int getT() { return t; } 
// }; 

// int main() { 
// 	int x = 20; 
// 	Test t1(x); 
// 	cout<<t1.getT()<<endl; 
// 	x = 30; 
// 	cout<<t1.getT()<<endl; 
// 	return 0; 
// }

///////////////////////////////////////////////////////////////////////
// 3.  When constructor’s parameter name is same as data member
// #include<iostream> 
// using namespace std; 

// class Test { 
//   int num;
//   public:
//   Test(int num): num(num){}
  
//   void Show(){
//     cout<<num;
//   }

// }; 

// int main() { 
// 	Test n(10); 
//   n.Show();
  
//   return 0; 
// }
