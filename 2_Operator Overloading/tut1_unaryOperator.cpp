                    //////////////////////////////////
                   /// Unart Operator Overloading ///
                  //////////////////////////////////
#include<iostream>
using namespace std;
class Test{
  private:
  int a,b;
  public:
  void Get(int x , int y){
      a = x;
      b = y;
  }
  void Show(){
      cout<<"T = ("<<a<<","<<b<<")"<<endl;
      
  }
  Test operator-(){
      Test temp;
       temp.a = -a;
       temp.b = -b;
      return temp; 
  }
};

int main(){

Test t1, t2, t3;
t1.Get(3,4);
t2.Get(1,2); 
// t3 = t1.operator-();
t3 = -t1;
     
t3.Show();


    return 0;
}
// Only one object call it and return object in positive or negative term
//In unary operator we don't give argument to a function
