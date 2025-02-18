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
string solve(int n){
    if(n==0){
        return "0";
    }
    string s="";
    while (n>0)
    {
        s=char((n%3)+'0')+s;
        n/=3;
    }
    return s;
}

///main code
int main(){
    fast()

    int n;
    while (cin>>n)
    {
        if(n<0){
            break;
        }
        cout<<solve(n)<<endl;
    }
    
    //int t=1;
    // cin>>t;
    // for(int i=1; i<=t; i++){
    //     // ll x;
    //     // cin>>x;
    //     //cout<<"Case "<<i<<": "<<x<<endl;

    // }
    
    return 0;
}
