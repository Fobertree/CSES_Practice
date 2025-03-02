#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> bits(n+1, 0);
    int tmp;

    for (int i = 0; i < n-1; i++) {
        cin >> tmp;
        bits[tmp] |= 1;
    }

    for (int i = 1; i <= n; i++) {
        if (bits[i] == 0) {
            cout << i;
            return 0;
        }
    }

    return 0;
}