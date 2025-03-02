#include <vector>
#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    // look at diagonal: follows arithmetic sequence dz = 2 + 4 + 8 + 16 + ...
    ll n, x, y, mmax, diag;
    vector<ll> res;
    
    cin >> n;

    res.reserve(n);

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        x--; y--;
        mmax = max(x,y);

        diag = (mmax+1) * mmax + 1;

        if (x == y) {
            res.push_back(diag);
            continue;
        }

        if (mmax % 2 == 1) {
            // CW
            res.emplace_back(diag + (x-y));
        } 
        else if (mmax % 2 == 0) {
            // CCW
            res.emplace_back(diag - (x-y));
        }
    }

    for (ll i : res) {
        cout << i << endl;
    }

    return 0;
}