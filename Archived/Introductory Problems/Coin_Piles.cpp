#include <iostream>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

#define PRINT(x) (cout << x << "\n")

bool solve(int a, int b) {
    if(a > b) swap(a,b);

    int dx = b-a;

    b-= dx * 2;
    a-= dx;
    
    if (a < 0 || b < 0 || a % 3 != 0) {
        return false;
    }

    return true;
}

int main() {
    int a, b, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        solve(a,b) ? PRINT("YES") : PRINT("NO");
    }

    return 0;
}