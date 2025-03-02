#include <vector>
#include <string>
#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<ll> vec(n);

    for (ll &i : vec) {
        cin >> i;
    }

    ll gt{0}, res{0};

    for (ll i : vec) {
        gt = max(i, gt);

        res += gt - i;
    }

    cout << res << endl;
    
    return 0;
}