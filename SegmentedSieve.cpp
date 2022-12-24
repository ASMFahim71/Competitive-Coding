#include<bits/stdc++.h>
#define N 32000
using namespace std;
using ll = long long;
vector <int> primes;
void sieve()
{
    vector <int> isprime(N,0);
    for(int i=2;i*i<=N;i++)
    {
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                isprime[j]=1;
            }
        }
    }
    for(int i=2;i<=N;i++)
    {
        if(isprime[i]==0)
        {
            primes.push_back(i);
        }
    }
}
void segment(ll l,ll r)
{
    vector <int> isprime(r-l+1,0);
    if(l==1) isprime[0]=1;
    for(int i=0;primes[i]*primes[i]<=r;i++)
    {  
        int currentprime=primes[i];
        ll base = (l/currentprime)*currentprime;
        if(base<l) base+=currentprime;
        for(ll j=base;j<=r;j+=currentprime)
        {
            isprime[j-l]=1;
        }
        if(base==currentprime) isprime[base-l]=0;
    }
    for(int i=0;i<r-l+1;i++)
    {
        if(isprime[i]==0)
        {
            cout<<(i+l)<<endl;
        }
    }
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        segment(l,r);
    }
    return 0;
}
