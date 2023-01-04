#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbl={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string isbalanced(string s)
{   
    stack<char> st;
    for(char braket:s)
    {
        if(symbl[braket]<0)
        {
            st.push(braket);
        }
        else
        {
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbl[top]+symbl[braket]!=0) return "NO";
        }

    }
    if(st.empty()) return "YES";
    else return "NO";


}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<isbalanced(s)<<endl;
    }
    
    return 0;
}
