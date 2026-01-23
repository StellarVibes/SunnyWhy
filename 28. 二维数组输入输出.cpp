#include<iostream>
using namespace std;

int main()
{
    int n = 0,m = 0;
    cin>>n>>m;
    for(int i = 0;i < n*m;i++)
    {
        int num = 0;
        cin>>num;
        if(i!=n*m-1&&(i+1)%m==0) cout<<num<<endl;
        else if(i!=n*m-1) cout<<num<<" ";
        else cout<<num;
    }

    return 0;
}