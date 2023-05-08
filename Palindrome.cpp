#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define endl '\n'
#define pi acos(-1)

int ct=0;

void myfunc(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(s==rev)
        cout << s << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0); 
    int t;
    cin >> t;

    for(int i=1; i<t; i++)
    {
        string s = to_string(i);
        myfunc(s);
    }
    return 0;  
}