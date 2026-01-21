#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    for(int i = n;i>=1;i--)
    {
        for(int j = 1;j<=i;j++)
            if(j!=i) cout<<j<<" ";
            else cout<<j;
        if(i!=1) cout<<endl;
    }

    return 0;
}