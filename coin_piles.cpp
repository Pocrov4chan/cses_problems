#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a >> b;
        if((a + b) % 3 == 0 && ((a * 2 >= b) && (b * 2 >= a))){
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
    }
}