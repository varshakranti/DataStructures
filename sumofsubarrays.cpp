#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum = sum + arr[j];
            cout<<sum<<endl;
        }
    }
}