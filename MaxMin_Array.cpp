#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }

        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }

    cout<<"Maximum Value Element "<< largest<<endl;
    cout<<"Minimum Value Element "<<smallest<<endl;
    return 0;
}
