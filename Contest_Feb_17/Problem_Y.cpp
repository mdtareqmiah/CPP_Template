///Tareq's template
#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false);
using namespace std;

const int mx_k = 5000000;
const ll lim = 10e7;

/// write function
// void sive(ll n){
//     vector<bool> n_prime(n+1,true);
//     n_prime[0]=false;
//     n_prime[1]=false;
//     for(ll i=2; i*i<=n; i++){
//         if(n_prime[i]){
//             for(ll j=i*i; j<=n; j+=i){
//                 n_prime[j]=false;
//             }
//         }
//     }
//     for(ll i=0; i<=n; i++){
//         if(n_prime[i]){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }
vector<int>v;
vector<bool> n_prime(lim, true);

void sive(){
    n_prime[0]=false;
    n_prime[1]=false;
    for(ll i=2; i<=lim; i++){
        if(n_prime[i]){
            v.push_back(i);
            if(v.size()>=mx_k){
                return;
            }
            for(ll j=i*i; j<lim; j+=i){
                n_prime[j]=false;
            }
        }
    }
}

///main code
int main(){
    fast()
    cin.tie(nullptr);

    sive();
    int t,n;
    cin>>t;
    while(t--){
        
        cin>>n;
        cout<<v[n-1]<<endl;
    }
    
    return 0;
}