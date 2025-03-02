#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> res = {n};
    res.reserve(n);

    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = n*3 + 1;

        res.push_back(n);
    }

    cout << res[0];

    for (int i = 1; i < res.size(); i++) {
        printf(" %lld", res[i]);
    }


    return 0;
}