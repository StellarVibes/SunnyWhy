#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int num = 0;
        cin>>num;
        if(i!=n-1) cout<<num<<" ";
        else cout<<num;
    }

    return 0;
}