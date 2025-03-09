///Tareq's template
#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

const int mx_k = 5000000;
const ll lim = 10e7;
const int N = 2e5 + 9;
long long pref_sum[N];
int a[N];

/// write function
void solve(){
    ll n, q;
    cin>>n>>q;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    //cin>>q;
    for(ll i=1; i<=n; i++){
        pref_sum[i]=pref_sum[i-1]+a[i];
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        l++, r++;
        cout<<(pref_sum[r]-pref_sum[l-1])<<endl;
    }
    return;
}

///main code
int main(){
    fast()

    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++){
        // ll x;
        // cin>>x;
        //cout<<"Case "<<i<<": "<<x<<endl;
        solve();
        cout<<endl;
    }
    
    return 0;
}