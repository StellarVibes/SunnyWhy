#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    long x = 0;
    cin>>x;
    int arr[1]={0};
    memset(arr,x,sizeof(arr));
    cout<<arr[0];
    
    return 0;
}