#include<iostream>


using namespace std;

void towerHanoi(int n, char a, char b, char c)
{
    if(n>0){
    towerHanoi(n-1, a, c, b);
    cout<<"move from: "<<a<<" to: "<<c<<endl;
    towerHanoi(n-1, b, a, c);
    }
}

int main()
{
    towerHanoi(3,'A','B','C');
    return 0;
}
