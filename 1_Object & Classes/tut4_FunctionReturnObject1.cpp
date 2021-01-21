                         ////////////////////////////////
                        //// Fun()Return Object     ////
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
    Time timeSum(Time);      
};    //Add Two Time
Time Time:: timeSum(Time T){
    Time temp;
    temp.hour = hour + T.hour;
    temp.min = min + T.min;

   if(temp.min>=60){
         temp.hour++;
         temp.min = temp.min - 60;
   }
   return temp;
}
/////////////////////////////////////////////////////////////////

int main()
{
 Time t1, t2, t3;
 t1.get();
 t2.get();
 t3=t1.timeSum(t2); 
 cout<<"==============="<<endl;
 t1.show();
 t2.show();
 t3.show();
return 0;
}