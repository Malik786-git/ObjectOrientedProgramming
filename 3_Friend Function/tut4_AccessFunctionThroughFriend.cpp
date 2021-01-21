// #include <iostream>
// using namespace std;
// /////////////////////////////////////////////////////////////
// class TestB;  // forward decleretion 
// class TestA
// {
// private:
//     int a;
// public:
//     void set(int x)
//     {
//         a = x;
//     }
//     void hello()
//     {
//           cout<<"Hello WORLD"<<endl;
//     }
// };
//  ////////////////////////////////////////////////////////////
// class TestB

// {
// private:
//     int b;

// public:
//     void set2(int x)
//     {
//         b = x;
//     }
//     // friend class TestA; // for all function access on class A 
//     friend void TestA::hello();
// };
// void hello();
// /////////////////////////////////////////////////////////////////////
// int main()
// {
//  TestB t1;  
//  return 0;
// }



// GreekFor Greek Example


#include <iostream> 

class B; 

class A { 
public: 
	void showB(B&); 
}; 

class B { 
private: 
	int b; 

public: 
	B() { b = 0; } 
	friend void A::showB(B& x); // Friend function 
}; 

void A::showB(B& x) 
{ 
	// Since showB() is friend of B, it can 
	// access private members of B 
	std::cout << "B::b = " << x.b; 
} 

int main() 
{ 
	A a; 
	B x; 
	a.showB(x); 
	return 0; 
}
