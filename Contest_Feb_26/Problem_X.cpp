// ///Tareq's template
// #include<bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define endl '\n'
// #define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
// using namespace std;

// const int mx_k = 5000000;
// const ll lim = 1e18;

// /// write function
// void solve(ll n){
//     vector<ll>v(n);
//     ll m=1;
//     for(ll i=0; i<n; i++){
//         cin>>v[i];
//         if(v[i]==0){
//             m=0;
//         }
//     }
//     // for (ll num : v) {
//     //     if (num == 0) {
//     //         cout << 0 << endl;
//     //         return;
//     //     }
        
//     //     if (m > lim / num) { 
//     //         cout << -1 << endl;
//     //         return ;
//     //     }
        
//     //     m *= num;
//     // }
//     // cout<<m<<endl;
//     for(ll i=0; i<n; i++){
//         if(v[i]==0){
//             cout<<0<<endl;
//             return;
//         }
//         if(m>lim/v[i]){
//             cout<<-1<<endl;
//             return;
//         }
//         m*=v[i];
                
//     }
//     cout<<m<<endl;
//     // if(m==0){
//     //     cout<<0<<endl;
//     // }
//     // // else if(m>lim){
//     // //     cout<<-1<<endl;
//     // //     //return;
//     // // }
//     // else{
//     //     cout<<m<<endl;
//     // }
//     return;
// }

// ///main code
// int main(){
//     fast()

//     ll t=1;
//     cin>>t;
//     // for(int i=1; i<=t; i++){
//     //     // ll x;
//     //     // cin>>x;
//     //     //cout<<"Case "<<i<<": "<<x<<endl;
//     // }
//     solve(t);
    
//     return 0;
// }

// accepted code


///Tareq's template
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

const int mx_k = 5000000;
const ll lim = 1e18;

/// write function
void solve(ll n){
    vector<ll>v(n);
    ll m=1;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==0){
            m=0;
        }
    }
    for(ll i=0; i<n; i++){
        if(m==0){
            // m=0;
            // break;
            cout<<0<<endl;
            return;
        }
        if(m>lim/v[i]){
            cout<<-1<<endl;
            return;
            //break;
        }
        m*=v[i];
    }
    // if(m==0){
    //     cout<<0<<endl;
    // }
    // else if(m>lim){
    //     cout<<-1<<endl;
    //     //return;
    // }
    // else{
    cout<<m<<endl;
    // }
    return;
}

///main code
int main(){
    fast()

    ll t=1;
    cin>>t;
    // for(int i=1; i<=t; i++){
    //     // ll x;
    //     // cin>>x;
    //     //cout<<"Case "<<i<<": "<<x<<endl;
    // }
    solve(t);
    
    return 0;
}