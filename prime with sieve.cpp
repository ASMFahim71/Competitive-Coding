#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
void sieve(int n)
{
    vector <int> isprime(N);
    for(int i=2;i*i<=n;i++)
    {
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(isprime[i]==0)
        {
            cout<<i<<endl;
        }
    }
    

}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
