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
void solve(ll n, int a){
    int ct=0;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            ct++;
            if(i!=(n/i)){
                ct++;
            }
        }
    }
    cout<<"Case "<<a<<": "<<ct<<endl;
}

///main code
int main(){
    fast()

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        ll n;
        cin>>n;
        solve(n,i);
    }
    
    return 0;
}