#include <vector>
#include <iostream>

using namespace std;

// think counterclockwise spiral

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    int offset{1}, cur{1};

    int piv = (n-1) /2;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION"; return 0;
    }

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    vec[piv] = n;

    while (cur < n) {
        vec[piv + offset] = cur;
        cur++;

        if (offset > 0) offset = -offset;
        else offset = -offset + 1;
    }

    cout << vec[0];

    for (int i = 1;i < n; i++) {
        printf(" %d", vec[i]);
    }

    return 0;

}