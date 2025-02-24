// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 1; t <= T; ++t) {
//         int Ax, Ay, Bx, By, Cx, Cy;
//         cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

//         int Dx = Ax + Cx - Bx;
//         int Dy = Ay + Cy - By;

//         int area = abs((Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax));

//         cout << "Case " << t << ": " << Dx << " " << Dy << " " << area << endl;
//     }

//     return 0;
// }
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
void solve(int t){

    for(int i=1; i<=t; i++){
        int ax, ay, bx, by, cx, cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;    
        int x = ax + cx - bx;
        int y = ay + cy - by;    
        int area = abs((bx - ax) * (cy - ay) - (by - ay) * (cx - ax));
        cout<<"Case "<<i<<": "<<x<<" "<<y<<" "<<area<<endl;
    }
        
}

///main code
int main(){
    fast()
    io

    int t;
    cin>>t;
    // while(t--){
        
    // }
    // for(int i=1; i<=t; i++){
       
    // }
    solve(t);
    
    return 0;
}