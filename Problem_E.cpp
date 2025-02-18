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
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    switch (s)
    {
    case '+':
        /* code */
        if((a+b)==c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<a+b<<endl;
        }
        break;
    
    case '-':
        if((a-b)==c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<a-b<<endl;
        }
        break;

    case '*':
        if((a*b)==c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<a*b<<endl;
        }
        break;
        
    }
}

///main code
int main(){
    fast()

    int t=1;
    // cin>>t;
    for(int i=1; i<=t; i++){
        // ll x;
        // cin>>x;
        //cout<<"Case "<<i<<": "<<x<<endl;
        solve();

    }
    
    return 0;
}