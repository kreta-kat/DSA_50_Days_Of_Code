#include<iostream>

using namespace std;

int uniqueElement(int arr[], int n)
{
   int ans=0;
    for(int i=0; i<n; i++)
    {
       ans ^= arr[i];
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int ans = uniqueElement(arr,n);

    if(ans == 0)
    {
        cout<<"no element common";
    }
    else{
        cout<<ans;
    }

    return 0;
}
