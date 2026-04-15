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
    vll diag(20001, 0);
    vll anti_diag(20001, 0);
    ll x, y;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> y;
        diag[x - y + 10000]++;
        anti_diag[x + y]++;
    }
    ll total = 0;
    for (auto x : diag)
    {
        total += x * (x - 1) / 2;
    }

    for (auto x : anti_diag)
    {
        total += x * (x - 1) / 2;
    }
    cout << total << '\n';
}