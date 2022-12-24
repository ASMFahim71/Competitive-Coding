#include<bits/stdc++.h>
using namespace std;
vector <int> divi[100000];
void divisor(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            divi[j].push_back(i);
        }
    }

    
}
int main()

{
    int n;
    cin>>n;
    divisor(n);
    for(auto d:divi[n])
    {
        cout<<d<<" ";
    }
    return 0;
}
