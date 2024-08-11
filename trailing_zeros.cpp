#include <iostream>

using namespace std;

int main(){
    long long a, total = 0;
    cin >> a;

    for (long long i = 5; a / i >= 1; i *= 5){
        total += a / i;
    }

    cout << total;
    return 0;
}
