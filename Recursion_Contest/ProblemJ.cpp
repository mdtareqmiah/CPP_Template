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
ll solve(int n){
   if(n==0){
    return 1;
   }
   return n*solve(n-1);

}
///main code
int main(){
    fast()
    io

    int n;
    cin>>n;
    cout<<solve(n);
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    
    return 0;
}