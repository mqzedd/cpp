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
    ll a;
    cin >> a;
    string s;
    ll x, y, z, b, c;
    ll totalcost = 0;
    while (a--)
    {
        cin >> s >> x >> y >> z >> b >> c;
        ll classes, cost;
        if (y == 0 && x != 0)
        {
            classes = 101;
        }
        else if (x == 0)
        {
            classes = 0;
        }
        else
        {
            classes = (x + y - 1) / y; // ceil 😮‍💨✌️
        }
        cost = classes * c;
        if (cost > b || classes > 100)
        {
            cout << s << " is cancelled!\n";
        }
        else
        {
            cout << s << ' ' << classes - z << '\n';
            totalcost += cost;
        }
        }
    cout << "Total cost is: " << totalcost;
}