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
    char ch[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>ch[i][j];
        }
    }
    //vector<string>s;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(ch[i][j]>='a'&& ch[i][j]<='z'){
                cout<<ch[i][j];
            }
        }
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