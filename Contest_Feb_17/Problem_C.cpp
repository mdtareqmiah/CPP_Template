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
    vector<int>v(3);
    for(int i=0; i<3; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    cout<<v[0]<<" "<<v[2]<<endl;
}

///main code
int main(){
    fast()

    int t=1;
    //cin>>t;
    for(int i=1; i<=t; i++){
        // ll x;
        // cin>>x;
        //cout<<"Case "<<i<<": "<< solve() <<endl;
        solve();
    }
    
    return 0;
}