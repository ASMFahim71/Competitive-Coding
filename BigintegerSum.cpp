#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> add(vector<ll>&a,vector<ll>&b)
{
    
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    vector<ll> ans;
    ll carry=0;
    for(int i=0;i<a.size();i++)
    {
        ll val=a[i]+b[i]+carry;
        carry=val/10;
        ans.push_back(val%10);
    }
    while(carry)
    {
        ans.push_back(carry%10);
        carry/=10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a1,b1;
        cin>>a1>>b1;
        while(a1.size()>b1.size()) b1='0'+b1;
        while(b1.size()>a1.size()) a1='0'+a1;
        vector<ll>a,b;
        for(auto x:a1)
        {
            a.push_back(x-'0');
        }
        for(auto y:b1)
        {
            b.push_back(y-'0');
        }
        vector<ll>bigsum = add(a, b);
        for(auto x:bigsum)
        {
            cout<<x;
        }
        cout<<endl;
    }
    
}
