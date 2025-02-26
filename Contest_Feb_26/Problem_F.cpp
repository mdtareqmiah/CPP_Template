///Tareq's template
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

const int mx_k = 5000000;
const ull lim = 1e18;

/// write function
ull gcdd(ull a, ull b){
    return __gcd(a,b);
}
void solve(){
    ull x,y;
    cin>>x>>y;
    x%=lim;
    y%=lim;
    ull gcd = gcdd(x,y);
    ull lcm = ((x/gcd)*y);
    ull res = gcd + lcm;
    ull add = x+y;
    add%=lim;
    res%=lim;
    if(res==add){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return;
}

///main code
int main(){
    fast()

    ull t=1;
    cin>>t;
    // for(int i=1; i<=t; i++){
    //     // ll x;
    //     // cin>>x;
    //     //cout<<"Case "<<i<<": "<<x<<endl;
    //     solve();
    // }
    while (t--)
    {
        /* code */
        solve();
    }
    
    
    return 0;
}