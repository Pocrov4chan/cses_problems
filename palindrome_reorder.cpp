#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    vector <int> arr(26, 0);
    int odd_count = 0, odd_value = 100, odd = n.size() % 2;

    for (int i = 0; i < n.size(); ++i){
        arr[(int) n[i] - 65]++;
    }

    for(int i = 0; i < 26; ++i){
        if(arr[i] % 2 == 1){
            odd_count += 1;
            odd_value = i;
        }
    }

    if(odd != odd_count){
        cout << "NO SOLUTION";
        return 0;
    }

    for(int i = 0; i < 26; ++i){
        arr[i] = arr[i] / 2;
        for(int j = 0; j < arr[i]; ++j){
            cout << (char) (i + 65);
        }
    }

    if(odd == 1){
        cout << (char) (odd_value + 65);
    }

    for(int i = 25; i >= 0; --i){
        for(int j = 0; j < arr[i]; ++j){
            cout << (char) (i + 65);
        }
    }
}