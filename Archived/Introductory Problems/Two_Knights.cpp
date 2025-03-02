#include <iostream>
#include <vector>
#include <utility>

// two knights
using namespace std;

typedef long long ll;

vector<pair<int,int>> dirs = {{2,1},{2,-1},{1,2},{1,-2},{-1,2},{-1,-2},{-2,1},{-2,-1}};

ll z {0};

int main() {
    int n; ll res{0}, cannot{0}, x,y, sq;
    cin >> n;

    // can condense to n^2
    for (int k = 1; k <= n; k++) {
        res = 0;sq = k*k;
        
        if (k <= 3) {
            for (int i = 0; i < k; i++) {
                for (int j = 0; j < k; j++) {
                    cannot = 0;

                    for (auto [a,b] : dirs) {
                        x = a + j; y = b + i;

                        if (x < 0 || x >= k || y < 0 || y >= k) {
                            cannot++;
                        }
                    }

                    res += sq - 1- (8-cannot);

                }
            }
            cout << res / 2 << endl;
        }
        else {
            // get around TLE
            // note: spend like 30 min bc off by 1 (consider square of knight 1 as well)
            res += 4 * (sq-3);
            res += 8 * (sq - 4);
            res += 4 * (k-3) * (sq-5);
            res += max(z, 4 * (k-4) * (sq-7));
            res += max(z, (k-4) * (k-4) * (sq-9));

            cout << res / 2 << endl;
        }
    }

    return 0;
}