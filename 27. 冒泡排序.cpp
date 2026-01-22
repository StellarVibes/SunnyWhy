#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 0;
    vector<int> v;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int num = 0;
        cin>>num;
        v.push_back(num);
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(i!=n-1) cout<<v[i]<<" ";
        else cout<<v[i];
    }
    
    return 0;
}