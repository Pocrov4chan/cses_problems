#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, k , total;
    total = 0;
    k = 8;
    cin >> a;
    cout << 0 << '\n';
    for (long long i = 2; i < a + 1; ++i){
        cout << ((i * i) * (i * i - 1)) / 2 - total << '\n';
        total += k;
        k += 8;
    }
}