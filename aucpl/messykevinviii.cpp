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
    ll n, b, sum;
    cin >> n;
    vector<int> coins;

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        coins.push_back(b);
    }
    cin >> sum;

    vll dp(sum + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j <= sum; j++)
        {

            dp[j] += dp[j - coins[i]];
        }
    }
    cout << dp[sum];
}