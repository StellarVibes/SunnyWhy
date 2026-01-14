#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    if(n<0) cout<<"Negative Number";
    else
    {
        if(n%2==1) cout<<"Odd Number";
        else cout<<"Even Number";
    }
    
    return 0;
}