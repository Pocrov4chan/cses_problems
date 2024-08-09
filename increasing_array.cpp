#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, total = 0;
    cin >> a;
    vector <long long> array(a + 1);

    for(long long i = 0; i < a; ++i){
        cin >> array[i];
    }

    for(long long i = 0; i < a - 1; ++i){
        if (array[i] - array[i + 1] > 0){
            total += (array[i] - array[i + 1]);
            array[i + 1] = array[i];
        }
    }

    cout << total;

    return 0;
}
