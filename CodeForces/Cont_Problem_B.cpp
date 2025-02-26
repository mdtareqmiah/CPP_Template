#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int count_dash = count(s.begin(), s.end(), '-');
        int count_underscore = count(s.begin(), s.end(), '_');
        
        if(count_dash < 2 || count_underscore == 0) {
            cout << 0 << endl;
        } else {
            cout << (count_dash * (count_dash - 1) / 2) * count_underscore << endl;
        }
    }
    return 0;
}