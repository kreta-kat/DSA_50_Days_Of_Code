#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s =0, e = n;
    while(s<= e)
    {
        int mid = (s+e)/2;
        if(mid == key)
        {
            return mid;
        }
        else if(mid >key)
        {
          e = mid-1; 
        }

        else if(mid < key)
        {
            s = mid+1;
        }
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
    int ans = binarySearch(arr,n,key);
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
