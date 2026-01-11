#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    string tmp;
    int count = 1;
    for(auto&e:s) 
    {
        if(e!='-') tmp+=e;
        else {if(count-->0)printf("%.4d",stoi(tmp));else printf("%.2d",stoi(tmp));tmp.clear();cout<<endl;}
    }
    if(count-->0)printf("%.4d",stoi(tmp));else printf("%.2d",stoi(tmp));tmp.clear();cout<<endl;
    for(auto&e:t) 
    {
        if(e!=':') tmp+=e;
        else {if(count-->0)printf("%.4d",stoi(tmp));else printf("%.2d",stoi(tmp));tmp.clear();cout<<endl;}
    }
    if(count-->0)printf("%.4d",stoi(tmp));else printf("%.2d",stoi(tmp));tmp.clear();cout<<endl;
    return 0;
}