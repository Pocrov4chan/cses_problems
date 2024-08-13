#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;
    vector <int> arr(a);
    for (int i = 0; i < a; ++i){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int counter = 1;
    for(int i = 0; i < a - 1; ++i){
        if(arr[i]  != arr[i + 1]) ++counter;
    }

    cout << counter;
}