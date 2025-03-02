#include <iostream>
#include <vector>

using namespace std;

#define PRINT(x) (cout << x << endl)

typedef unsigned long long ll;

constexpr ll MOD = 1e9 + 7, BT = 8; // time loss here since i set BT to 63, but it was chopping off

int main() {
    ll n; cin >> n;
    ll res = 1;
    ll tmp;

    while (n > 0) {
        tmp = min(BT, n);
        res = res << tmp;
        n -= tmp;
        res = res % MOD;
    }

    PRINT(res);

    return 0;
}