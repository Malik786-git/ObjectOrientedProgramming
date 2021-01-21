/////////////////////////////////////////////
////////// Basic Friend Example /////////////
/////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// class Test
// {
// private:
//    int a, b;
// public:
//     void set(int x, int y){
//         a = x;
//         b = y;
//     }
//     void show(){
//         cout<<"First No. :"<<a<<endl;
//         cout<<"Second No. :"<<b<<endl;

//     }
//     friend void show1();
// };
// void show1(){
//     //    friend fun() not access diretly data members
//         cout<<"HELLO WORLD";
// }
// int main(){

//       Test t1;
//       t1.set(10,10);
//       t1.show();
//       show1();
//     return 0;
// }
/////////////////////////////////////////////
////////// Basic Friend Example /////////////
/////////////////////////////////////////////
#include <iostream>
using namespace std;
class Test

{
private:
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "First No. :" << a << endl;
        cout << "Second No. :" << b << endl;
    }
    friend void show1(Test);
};
void show1(Test t)
{
    //  using obj parameter we access data member Of class
    cout << "Sum Is = " << t.a + t.b << endl;
}
int main()
{

    Test t1;
    t1.set(10, 10);
    t1.show();
    show1(t1);
    return 0;
}