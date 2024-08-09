#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
        long long t, y, x;
    cin >> t;
    for (long long i = 0; i < t; ++i){
        cin >> y >> x;
        long long y_value = (y - (y % 2)) * (y - (y % 2)) + (y % 2);
        long long x_value = ((x - 1) + (x % 2)) * ((x - 1) + (x % 2)) + 1 - (x % 2);
        if (y_value > x_value) {
            if(y % 2 == 1) cout << y_value + x - 1 << '\n';
            else cout << y_value - x + 1 << '\n';
        } 
        else{
            if(x % 2 == 0) cout << x_value + y - 1 << '\n';
            else cout << x_value - y + 1 << '\n';
        }
    }
}
    

