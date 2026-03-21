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
    ll cnum, h;
    ll cur, max, count;
    cin >> cnum;
    vi c(cnum + 1);
    for (int i = 0; i < cnum; i++)
    {
        cin >> c[i];
    }
    vi dp(cnum + 1, 0);
    dp[cnum - 1] = -1;

    for (int i = cnum - 1; i >= 0; i++)
    {
        }
}