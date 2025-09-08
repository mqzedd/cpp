#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a;
    a += 2;
    vi c;
    int sum = 0;
    while (a--)
    {
        cin >> b;
        sum += b;
        c.push_back(b);
    }
    sort(c.begin(), c.end(), greater<int>());
    a = c[0];
    sum -= a * 2;
    cout << sum << ' ' << a;
}