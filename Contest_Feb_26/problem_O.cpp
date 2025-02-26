///Tareq's template
#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

const int mx_k = 5000000;
const ll lim = 10e7;

/// write function
void solve(){
    ll a; 
    cin>>a;
    if(a<0){
        return;
    }
    int ct = 0;
    for(ll i=5; i<=a; i*=5){
        ct+=a/i;
    }
    cout<<ct<<endl;
    return;
}

///main code
int main(){
    fast()

    int t=1;
    //cin>>t;
    for(int i=1; i<=t; i++){
        // ll x;
        // cin>>x;
        //cout<<"Case "<<i<<": "<<x<<endl;
        solve();
    }
    
    return 0;
}