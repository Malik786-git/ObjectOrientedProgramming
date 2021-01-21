#include <iostream>
using namespace std;

class Test
{
private:
    int a, b;
public:
  void set(int x, int y){
      a = x;
      b = y;
  }
  void show(){
      cout<<"A = "<<a<<", B = "<<b<<endl;
  }

  friend ostream& operator<<(ostream&, Test);
  friend istream& operator>>(istream&, Test&);
};

  ostream& operator<<(ostream& out, Test t){
    cout<<t.a<<t.b;
    return (out);
  }
  
  istream& operator>>(istream& in, Test& t){
    cin>>t.a>>t.b;
    return (in);
  }
int main(){

    Test t1;
    cin>>t1;
    cout<<t1;
    //For Further Explanation
    // int n;
    // cout<<"Enter Any Number:";
    // cin>>n;

    return 0;
}
