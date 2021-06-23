#include<iostream>
using namespace std;

int main()
{
    int n,mx=-999999;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }

    return 0;
}