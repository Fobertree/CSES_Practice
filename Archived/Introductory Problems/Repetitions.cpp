#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string s;

    cin >> s;

    int cur_len{0}, max_len{0};
    char prev = '.';

    for (char c : s) {
        if (prev == c) {
            cur_len++;
        }
        else {
            max_len = max(max_len, cur_len);
            cur_len = 1;
            prev = c;
        }
    }
    max_len = max(max_len, cur_len);

    cout << max_len << endl;

    return 0;
}