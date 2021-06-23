#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;

    int arr[n+1];
    arr[n] = -1;

    cout<<"Enter the elements of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

//brute force
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
    //     {
    //         cout<<arr[i]<<endl;
    //     }
    // }

//optimized approach
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    
    int ans=0;
    int mx=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    
    cout<<ans<<endl;
    return 0;
}