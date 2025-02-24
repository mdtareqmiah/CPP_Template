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
void recurtion(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    recurtion(n-1);
    
    return;
}

///main code
int main(){
    fast()
    io

    int t;
    cin>>t;
    recurtion(t);
    // while(t--){
        
    // }
    
    return 0;
}