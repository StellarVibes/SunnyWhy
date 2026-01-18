#include<iostream>
using namespace std;

int main()
{
    int n = 0,sum = 0;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        if(sum>2000) break;
        sum+=i;
    }
    cout<<sum;
    
    return 0;
}