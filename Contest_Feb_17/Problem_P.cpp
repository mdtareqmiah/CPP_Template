#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Kadane’s Algorithm
    int mx = v[0], x = v[0];

    for (int i = 1; i < n; ++i) {
        x = max(v[i], x + v[i]); 
        mx = max(mx, x); 
    }

    cout << mx << endl;
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
