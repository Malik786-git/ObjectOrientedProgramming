                         ///////////////////////////////
                        //// Object As A Argument  ////
                       ///////////////////////////////
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class SumNumber // 
{
    int number;

    public:
    void getNum(){
      cout<<"Enter Number: ";
      cin>>number;
    }
    void showNum(){
         cout<<"Number: "<<number<<endl; 
    }
    void addition(SumNumber, SumNumber);
};
void SumNumber::addition(SumNumber n1, SumNumber n2){
   number = n1.number + n2.number;
   cout<<"Get Number After Sum: "<<number<<endl;
}
/////////////////////////////////////////////////////////////////

int main()
{
    SumNumber n1, n2, n3;
    n1.getNum();
    n2.getNum();
    n3.addition(n1,n2);

return 0;
}