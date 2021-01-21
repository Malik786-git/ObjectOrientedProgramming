// ......................................................................
// friend function is friend of more than One Class, 
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////
class TestB;  // forward decleretion 
class TestA
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "A (First Class) :" << a << endl;
    }
    friend void Myfun(TestA, TestB);
};
 ////////////////////////////////////////////////////////////
class TestB

{
private:
    int b;

public:
    void set2(int x)
    {
        b = x;
    }
    void show2()
    {
        cout << "B (Second Class) :" << b << endl;
    }
    friend void Myfun(TestA, TestB);
};
///////////////////////////////////////////////////////////////////////
void Myfun(TestA T1 , TestB T2)
{
    //  using obj parameter we access data member Of class
    cout << "Sum Is = " << T1.a + T2.b << endl;
}

/////////////////////////////////////////////////////////////////////
int main()
{

    TestA t1;
    TestB t2;

    t1.set(10);
    t2.set2(12);

    t1.show();
    t2.show2();


    Myfun(t1, t2);
    return 0;
}