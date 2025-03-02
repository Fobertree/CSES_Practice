#include <iostream>
#include <vector>

using namespace std;

#define PRINT(x) (cout << x << endl)

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    // (n+1)n / 2 -> MOD 4

    if (((n+1) * n) % 4 != 0) {
        PRINT("NO");
        return 0;
    }

    PRINT("YES");
    vector<int> a,b; a.reserve(n); b.reserve(n);
    ll t1{((n+1) * n)/4}, t2;
    t2 = t1;

    for (int i = n; i >= 1; i--) {
        if (t1 - i >= 0) {a.push_back(i); t1-= i;}
        else {
            b.push_back(i);
            t2 -= i;
        }
    }

    PRINT(a.size());
    for (int i : a) {
        printf("%d ", i);
    }
    puts("");

    PRINT(b.size());
    for (int i : b) {
        printf("%d ", i);
    }
    puts("");

    return 0;
}