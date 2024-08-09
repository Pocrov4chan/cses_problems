#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string dna;
    cin >> dna;

    int current_length = 1;
    int max_length = 1;

    for (size_t i = 1; i < dna.size(); ++i) {
        if (dna[i] == dna[i - 1]) {
            current_length++;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }

    max_length = max(max_length, current_length);

    cout << max_length << "\n";

    return 0;
}
