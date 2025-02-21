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
    string s;
    cin>>s;
    int a=count(s.begin(), s.end(), '1');
    int b=s.size()-a;  
    int c=min(a,b);
    if(c%2==1){
        cout<<"DA"<<endl;
    } 
    else{
        cout<<"NET"<<endl;
    }
}

///main code
int main(){
    fast()
    io

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}