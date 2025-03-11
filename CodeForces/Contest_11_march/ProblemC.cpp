/// Tareq's template
#include <bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define endl '\n'
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve() {
    int x;
    cin >> x;

    for (int y = x - 1; y >= 1; y--) {
        int z = x ^ y; // Compute XOR value
        
        if (y + x > z && y + z > x && x + z > y) { 
            cout << y << endl;
            return;
        }
    }

    cout << -1 << endl; // If no valid y found
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
