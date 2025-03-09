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
    string s;
    cin>>s;
    int n=s.size();
    vector<int>v(n,0);
    for(int i=1; i<n; i++){
        v[i]=v[i-1]+(s[i]==s[i-1]);
    }
    int m;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<endl;
    }
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