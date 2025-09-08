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
    ll flavnum, target;
    cin >> flavnum >> target;
    ll c;
    vll flavours;
    while (flavnum--)
    {
        cin >> c;
        flavours.push_back(c);
    }
    vll dp(target + 1, INT_MAX);
}