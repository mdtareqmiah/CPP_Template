
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
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=0, r=0, mx=0, x=0;
    while(r<n){
        x+=v[r];
        while(x>m){
            x-=v[l];
            l--;
        }
        mx=max(mx,r-l+1);
        r++;
    }
    cout<<mx<<endl;
}

///main code
int main(){
    fast()
    io

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}