#include<iostream>
using namespace std;
int fact(int n)
{
     
    if(n == 0)
    {return 1;}

    else if(n>0)
    {
        return n*fact(n-1);
    }
    else
    {
     cout<<"Wrong input"; 
     return -1;
    }
    
}
int main()
{
    int n = -5;
    cout<<fact(n);
}
