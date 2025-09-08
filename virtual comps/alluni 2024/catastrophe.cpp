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
    cin >> a >> b;
    int c;
    int sum = 0;
    vi d;
    vi e;
    d.push_back(0);
    while (a--)
    {
        cin >> c;
        sum += c;
        d.push_back(sum);
    }
    cout << '\n';
    while (b--)
    {
        cin >> c;
        cout << upper_bound(d.begin(), d.end(), c) - d.begin() - 1 << '\n';
    }
}