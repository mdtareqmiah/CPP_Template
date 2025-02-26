#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;
    
    int max_sum = n * p;
    int min_sum = n * (-p);
    
    if (k < min_sum || k > max_sum) {
        cout << -1 << "\n";
        return;
    }

    
    int a = (abs(k) + p - 1) / p; 
    cout << a << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
