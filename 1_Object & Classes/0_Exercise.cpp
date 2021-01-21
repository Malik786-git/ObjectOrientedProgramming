// 1.  Create a class that imitates part of the functionality of the basic data type int. Call the
// class Int (note different capitalization). The only data in this class is an int variable.
// Include member functions to initialize an Int to 0, to initialize it to an int value, 
// to display it (it looks just like an int), and to add two Int values.
// Write a program that exercises this class by creating one uninitialized and two initialized
// Int values, adding the two initialized values and placing the response in the uninitialized
// value, and then displaying this result........


// #include <iostream>
// using namespace std;

// class Int
// {
// private:
//     int num;
// public:
//     Int(): num(0) {}
//     Int(int x): num(x) {}
//     void disply(){
//         cout<<num;
//     }
//     void add(Int obj1, Int obj2){
//         num = obj1.num+obj2.num;
//     }
// };

// int main(){
 
//     Int n1;
//     Int n2(4), n3(5);
//     n1.add(n2,n3); 
//     n1.disply();

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////

// 2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
// toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
// track of the number of cars that have gone by, and of the total amount of money collected.
// Model this tollbooth with a class called tollBooth. The two data items are a type
// unsigned int to hold the total number of cars, and a type double to hold the total amount
// of money collected. A constructor initializes both of these to 0. A member function called
// payingCar() increments the car total and adds 0.50 to the cash total. Another function,
// called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
// member function called display() displays the two totals. Make appropriate member
// functions const.
// Include a program to test this class. This program should allow the user to push one key
// to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
// cause the program to print out the total cars and total cash and then exit.


#include <iostream>
using namespace std;
#include <conio.h>
const char ESC = 27; //escape key ASCII code
const double TOLL = 0.5; //toll is 50 cents
////////////////////////////////////////////////////////////////
class tollBooth
{
private:
unsigned int totalCars; //total cars passed today
double totalCash; //total money collected today
public: //constructor
tollBooth() : totalCars(0), totalCash(0.0)
{ }
void payingCar() //a car paid
{ totalCars++; totalCash += TOLL; }
void nopayCar() //a car didn’t pay
{ totalCars++; }
void display() const //display totals
{ cout << "\nCars=" << totalCars
<< ", cash=" << totalCash
<< endl; }
};

////////////////////////////////////////////////////////////////
int main()
{
tollBooth booth1; //create a toll booth
char ch;
cout << "\nPress 0 for each non-paying car,"
     << "\n 1 for each paying car,"
     << "\n Esc to exit the program.\n";
do {
    ch = getche(); //get character
    if( ch == '0' ) //if it’s 0, car didn’t pay
    booth1.nopayCar();
    if( ch == '1' ) //if it’s 1, car paid
    booth1.payingCar();
} while( ch != ESC ); //exit loop on Esc key
    booth1.display(); //display totals


return 0;
}