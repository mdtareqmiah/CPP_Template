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
    int n, q;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int i=l; i<=r; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
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