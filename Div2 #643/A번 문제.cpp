#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long ll;
typedef long double ld;
ll st, k;

ll mindig(ll x) {
    ll mn = 10;
    while (x) {
        mn = min(mn, (ll)x % 10);
        x /= 10;
    }
    return mn;
}

ll maxdig(ll x) {
    ll mx = 0;
    while (x) {
        mx = max(mx, (ll)x % 10);
        x /= 10;
    }
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    ll mn, mx;
    while (T--) {
        cin >> st >> k;
        for (ll i = 1; i <= k - 1; i++) {
            mn = mindig(st);
            mx = maxdig(st);
            if (mn == 0 || mx == 0) break;
            st += mn * mx;
        }
        cout << st << '\n';
    }
}
