#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, k, counter = 0;
    cin >> n >> m >> k;
    vector <long long> sizes;
    vector <long long> preferences;

    for(long long i = 0; i < n; ++i){
        long long size;
        cin >> size;
        sizes.push_back(size);
    }

    for(long long i = 0; i < m; ++i){
        long long preference;
        cin >> preference;
        preferences.push_back(preference);
    }

    sort(preferences.begin(), preferences.end());
    sort(sizes.begin(), sizes.end());

    long long j = 0;
    long long i = 0;
    while(i < m and j < n){
        if(preferences[i] + k < sizes[j]){
            ++i;
        }
        if(preferences[i] - k > sizes[j]){
            ++j;
        }
        if(preferences[i] + k >= sizes[j] and preferences[i] - k <= sizes[j]){
            ++j;
            ++i;
            ++counter;
        }
    }

    std::cout << counter;
}