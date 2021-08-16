#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year% 4 == 0)
    {
       if(year % 100 == 0)
       {
           if(year % 400 == 0)
           {
               cout<<"It is a leap Year";
           }
           else
           cout<<"It is not leap Year";
       }
       else
       cout<<" It is leap Year";
    }
    else
    cout<<"It is not leap Year";

    return 0;
}
