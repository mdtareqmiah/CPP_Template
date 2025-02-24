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
void recursion(ll n){
    if(n==0){
        return;
    }
    
    recursion(n/10);
    cout<<(n%10)<<" ";
    return;
}

///main code
int main(){
    fast()
    io

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==0){
            cout<<0<<endl;
        }
        else{
            recursion(n);
            cout<<endl;
        }
        
    }
    
    return 0;
}