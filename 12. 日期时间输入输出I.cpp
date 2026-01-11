#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    string tmp;
    for(auto&e:s) 
    {
        if(e!='-') tmp+=e;
        else {cout<<stoi(tmp);tmp.clear();cout<<endl;}
    }
    cout<<stoi(tmp);tmp.clear();cout<<endl;
    for(auto&e:t) 
    {
        if(e!=':') tmp+=e;
        else {cout<<stoi(tmp);tmp.clear();cout<<endl;}
    }
    cout<<stoi(tmp);tmp.clear();cout<<endl;
    return 0;
}