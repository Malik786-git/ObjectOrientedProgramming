                        /////////////////////////////
                       // Pre and Post Increament //
                      /////////////////////////////
#include<iostream>
using namespace std;
class Test{
  private:
  int a;
  public:
  void Get(int x){
      a = x;
    
  }
  void Show(){
      cout<<"Ans: "<<a<<endl;
      
  }
  Test operator++(){              //Pre Increment 
      Test temp;
      temp.a = ++a;
      return temp; 
  }
  Test operator++(int){         // Post Increment  (here Int is postFix Notation)
      Test temp;
      temp.a = a++;
      return temp; 
  }
};

int main(){

Test t1,t2;
t1.Get(3);
//t2 = ++t1;
t2 = t1++;     
// t2=t1.operator++();
t1.Show();
t2.Show();
    return 0;
}
