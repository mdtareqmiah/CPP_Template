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
int solve(){
    ll a,b;
    cin>>a>>b;
    if(a<b){
        cout<<"<"<<endl;
    }
    else if(a>b){
        cout<<">"<<endl;
    }
    else{
        cout<<"="<<endl;
    }
}

///main code
int main(){
    fast()

    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++){
        // ll x;
        // cin>>x;
        //cout<<"Case "<<i<<": "<< solve() <<endl;
        solve();
    }
    
    return 0;
}