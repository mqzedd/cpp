#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, c;
    cin >> a >> b >> c;
    bool contains = (a == 5 or b == 5 or c == 5);
    if (!contains)
    {
        cout << "Run!";
        return 0;
    }
    if (a != 5)
        cout << a << ' ';

    if (b != 5)
        cout << b << ' ';

    if (c != 5)
        cout << c << ' ';
}