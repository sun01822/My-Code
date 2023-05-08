#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define endl '\n'
#define pi acos(-1)

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0); 

    double r, area, PI;

    cout << "Enter the radius: ";
    cin >> r;

    PI = pi;

    area = pi * r * r;

    cout << "Area: " << area << endl;
    
    return 0;  
}