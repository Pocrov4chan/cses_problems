#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    long long total = 2;
    long long mod = 1e9 + 7;

    for (int i = 1; i < n; ++i){
        total = (total % mod) * 2;
    }

    cout << total % mod;

}