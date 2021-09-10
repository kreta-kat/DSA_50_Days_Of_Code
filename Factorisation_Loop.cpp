#include<iostream>
using namespace std;
int main()
{
    int N,num=1,count=0;
    int arr[N];
    cin>>N;
    while(num<=N)
    {
        if(N%num == 0)
        {count++;
          arr[count];}
          N++;    
    }
    cout<<count<<endl;
    for(int i=0; i<N; i++)
    {
            cout<<arr[i]<<" ";
    }
    return 0;
}
