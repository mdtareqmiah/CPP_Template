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
    int n; 
    while(cin>>n){
        // if(n<=0){
        //     break;
        // }
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int m;
        cin>>m;
        sort(v.begin(), v.end());
        int i=0, j=n-1,b1=0, b2=0,temp=INT_MAX;
        while (i<j){
            int sum=v[i]+v[j];
            if(sum==m){
                if(v[j]-v[i]<temp){
                    b1=v[i];
                    b2=v[j];
                    temp=v[j]-v[i];
                }
                i++;
                j--;
            }
            else if(sum<m){
                i++;
            }
            else{
                j--;
            }
        }
        cout<<"Peter should buy books whose prices are "<<b1<<" and "<<b2<<"."<<endl;
        cout<<endl;
        
    }
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