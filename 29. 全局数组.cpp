#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long n = 0;
    cin>>n;
    vector<int> v(n);
    for(long i = 0;i < n;i++)
    {
        int num = 0;
        cin>>v[i];
    }
    for(int i = 0;i<n;i++)
    {
        if(i==n-1){
            cout<<v[i];
            break;
        }
        cout<<v[i]<<" ";
    }
    
    return 0;
}