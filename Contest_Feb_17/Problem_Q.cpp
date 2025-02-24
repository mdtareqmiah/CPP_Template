
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
    int mx=0, x=0, a=0, b=0;
    for(int i=0; i<n; i++){
        a+=v[i];
         x++;
        while(a>m){
            a-=v[b];
            b++;
            x--;
        }
        if(x>mx){
            mx=x;
        }
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

