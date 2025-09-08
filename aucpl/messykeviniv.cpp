#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a{};
    ll b;
    ll c;
    cin >> a;
    c = a * (a + 1) / 2;

    a--;
    while (a--)
    {
        cin >> b;
        c -= b;
    }
    cout << c;
}