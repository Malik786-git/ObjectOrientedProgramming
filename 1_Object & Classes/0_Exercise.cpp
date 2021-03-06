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

// 2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent or half $ = 0.5
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

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// #include <conio.h>


// const char ESC = 27;

// class tollBooth
// {
// private:
//    unsigned int totalCar;
//    double totalMoney;
// public:
//    tollBooth(): totalCar(0), totalMoney(0) {}

//    void payingCar(){
//        totalCar++; 
//        totalMoney +=  0.50;
//    }
//    void noPayCar(){
//        totalCar++;
//    }
//    void disply() const {
//        cout<<"/nTotal Car Passes: "<<totalCar<<endl;
//        cout<<"Total Amount of Money: "<<totalMoney<<endl;
//    }
// };

// int main(){
//   char ch;   
//   tollBooth T;
//   cout<<"Press 1 For Paying Car"<<endl
//       <<"Press 2 For Non Pay Car"<<endl
//       <<"Esc For Exit, Get Result "<<endl;

//  do{
//     ch = getche();
//     if(ch=='1')
//     {
//         T.payingCar();
//     }
//     if(ch=='2')
//     {
//         T.noPayCar();
//     }
    
//  }while(ch != ESC);
//         T.disply();

//   return 0;
// }









