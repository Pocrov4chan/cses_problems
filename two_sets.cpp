#include <bits/stdc++.h>

using namespace std;

int main() {
  long long start, total, half_total;
  vector < long long > arr_1;
  vector < long long > arr_2;
  long long counter_1 = 0;
  long long counter_2 = 0;
  cin >> start;
  total = (start * (start + 1)) / 2;
  half_total = total / 2;
  if (total % 2 != 0) cout << "NO";
  else {
    cout << "YES" << '\n';
    for (long long i = 0; i < start; --start) {
      if (total - start >= half_total) {
        counter_1 += 1;
        arr_1.push_back(start);
        total = total - start;
      } else {
        counter_2 += 1;
        arr_2.push_back(start);
      }
    }
    cout << counter_1 << '\n';
    for (long long i = 0; i < counter_1; ++i) {
      cout << arr_1[i] << " ";
    }
    cout << '\n';
    cout << counter_2 << '\n';
    for (long long i = 0; i < counter_2; ++i) {
      cout << arr_2[i] << " ";
    }
  }

}