#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,temp,sum=0,count=0;
    cin>>n;
    int a = n;
    temp = n;
    while(a>0)
    {
        a = a/10;
        count++;
    }
   cout<<count<<endl;
   while(temp>0)
  {
     temp = temp%10;
     sum = sum + pow(temp,count);
     temp = temp/10;

  }
  cout<<sum;
  if(sum == n)
  cout<<"Armstrong number";
  else
  cout<<"Not an Armstrong number";
   return 0;
}
