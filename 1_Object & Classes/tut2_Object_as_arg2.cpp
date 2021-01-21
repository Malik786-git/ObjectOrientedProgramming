                         ////////////////////////////////
                        //// Object As A Argument 2 ////
                       ////////////////////////////////
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Time // 
{
    int hour;
    int min;
    public:
    Time(): hour(0), min(0)
    {         }   //default conts.

    void get(){
        int h, m;
        cout<<"Enter Hour: ";
        cin>>h;
        cout<<"Enter Minutes: ";
        cin>>m;
        if (h<=12 && m<=60)
        {
            hour = h;
            min = m;
        }else
        {
            cout<<"You Enter Wrong Time !"<<endl;
        }
        
    }
    void show(){
       cout<<"Time  :: "<<hour<<" hour : "<<min<<" min"<<endl; 
    }
    void timeSum(Time, Time);      
};    //Add Two Time
void Time:: timeSum(Time T1, Time T2){
    hour = T1.hour + T2.hour;
    min = T1.min + T2.min;

   if(min>=60){
         hour++;
         min = min - 60;
        //  cout<<"Sum Of Time Is : "<<hour<<" hour : "<<min<<" min"<<endl;
   }
}
/////////////////////////////////////////////////////////////////

int main()
{
 Time t1, t2, t3;
 t1.get();
 t2.get();
 t3.timeSum(t1,t2); 
 cout<<"==============="<<endl;
 t1.show();
 t2.show();
 t3.show();
return 0;
}