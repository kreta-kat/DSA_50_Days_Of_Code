#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int marks[n]; //100;
    for(i=0; ;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0; i<n;i++)
    {
    if(marks>100 || marks<0)
    return -1;

    if(marks[i] >= 90)
    {
        cout<<"A";
    }
    else if(marks[i]>=80 && marks[i<90)
    {
        cout<<"B";
    }
    else if(marks[i]>=70 && marks[i]<80)
    {
        cout<<"C";
    }
    else if(marks[i]>=30 && marks[i]<70)
    {
        cout<<"D";
    }
    else
    {
        cout<<"F";
    }
    }
    
    return 0;
}
