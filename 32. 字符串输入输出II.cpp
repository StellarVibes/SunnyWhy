#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    cin.ignore();  // 忽略输入缓冲区中剩余的换行符
    string s;
    for(int i = 0;i<n;i++)
    {
        getline(cin,s);
        if(i!=n-1) cout<<s<<endl;
        else cout<<s;
    }
    
    return 0;
}