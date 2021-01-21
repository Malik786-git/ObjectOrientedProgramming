                         ///////////////////////////
                        //// Array Of Object   ////
                       ///////////////////////////
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Test // 
{
    int number;    
    public:
    Test(int x): number(x){};

    Test(int x, int y){
        // number = x;
        number = y;
    };
   
    void Get(int n){
          number = n;
    }
    void Show(){
        cout<<"Output : "<<number<<endl;
    }
};

/////////////////////////////////////////////////////////////////

int main()
{
//   Test t[2] = {{4},{8,123}};
  Test t[2] = {{12},{3,2}};
//   t[0].Show();
//   t[1].Show();
  
 for (int i = 0; i < 2; i++)
 {
    //  t[i].Get(i+1);
     t[i].Show();
 }
return 0;
}