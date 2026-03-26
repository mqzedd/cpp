#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    if (!(cin >> n))
        return 0;

    ll minx = LLONG_MAX, maxX = LLONG_MIN;
    ll miny = LLONG_MAX, maxx = LLONG_MIN;

    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        minx = min(minx, x);
        maxX = max(maxX, x);
        miny = min(miny, y);
        maxx = max(maxx, y);
    }

    cout << minx << " " << miny << "\n";
    cout << minx << " " << maxx << "\n";
    cout << maxX << " " << maxx << "\n";
    cout << maxX << " " << miny << "\n";
}