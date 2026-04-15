#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a;
    cin >> a;
    ll b;
    ll total = 0;
    while (a--)
    {
        cin >> b;
        total += b;
    }
    cerr << total << '\n';
    cerr << floor(sqrt(total * 2)) * floor(sqrt(total * 2) + 1) / 2 << '\n';
    if (floor(sqrt(total * 2)) * floor(sqrt(total * 2) + 1) / 2 == total)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}