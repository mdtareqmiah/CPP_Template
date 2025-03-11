///Tareq's template
#include <bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    priority_queue<int> pq;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    
    while (pq.size() > 1) {
        int a = pq.top(); 
        pq.pop();
        int b = pq.top(); 
        pq.pop();
        
        int x = a + b - 1;  
        pq.push(x);
    }
    
    cout << pq.top() << endl; 
}

int main() {
    fast();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
