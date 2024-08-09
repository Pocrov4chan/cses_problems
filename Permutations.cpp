#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    if(a == 2 || a ==3){
        cout << "NO SOLUTION";
    }
    else{
        for(int i = 2; i <= a; i = i + 2){
            cout << i << " ";
        }
        for (int i = 1; i <= a; i = i + 2){
            cout << i << " ";
        }
    }

    return 0;
}
