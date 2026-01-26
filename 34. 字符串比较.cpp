#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int ret = strcmp(&s[0],&t[0]);
    if(ret>0) cout<<'>';
    else if(ret<0) cout<<'<';
    else cout<<'=';
    
    return 0;
}