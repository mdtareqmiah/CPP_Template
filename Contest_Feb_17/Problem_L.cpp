

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

bool l_year(int a) {
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

bool h_year(int a) {
    return a % 15 == 0;
}

bool b_year(int a) {
    return a % 55 == 0 && l_year(a);
}

///main code
int main(){
    fast()
    //io

    int y;
    bool ch = true;

    while (cin >> y) {
        if (!ch) {
            cout << endl;
        }
        ch = false;

        bool l = l_year(y);
        bool h = h_year(y);
        bool b = b_year(y);

        if (l) {
            cout << "This is leap year." << endl;
        }
        if (h) {
            cout << "This is huluculu festival year." << endl;
        }
        if (b) {
            cout << "This is buluculu festival year." << endl;
        }
        if (!l && !h && !b) {
            cout << "This is an ordinary year." << endl;
        }
    }

    
    return 0;
}



