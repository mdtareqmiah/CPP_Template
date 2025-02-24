///Tareq's template
#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false);
#define io cin.tie(nullptr);
using namespace std;

const int mx_k = 5000000;
const ll lim = 10e7;

/// write function
int solve(int n){
    int ct=0,a=1;
    while(a<n){
        a*=2;
        ct++;
    }
    return ct;
}

///main code
int main(){
    fast()
    io

    int t,c=1;
    //cin>>t;
    while(cin>>t && t>0){
        //solve();
        cout<<"Case "<<c++<<": "<<solve(t)<<endl;
    }
    return 0;
}