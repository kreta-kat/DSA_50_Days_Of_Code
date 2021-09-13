#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i =0; i<n; i++)
    {
        if(arr[i] == key)
        return i;
    }
    return -1;
}


int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to find"<<endl;
    cin>>key;
    int ans = linearSearch(arr,n,key);
    if(ans > 0 )
    {
        cout<<"Found at "<<ans+1<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    return 0;

}
