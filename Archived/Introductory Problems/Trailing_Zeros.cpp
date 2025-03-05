// prime factorize into number of 5's

#include <iostream>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

int solve(ll n) {
    // prime factorization to get number of 5's in factorial
    if (n == 0) return 0;
    
    return n/5 + solve(n/5);
}

int main() {
    ll n; cin >> n;
    ll res = solve(n);
    cout << res << endl;
    return 0;
}