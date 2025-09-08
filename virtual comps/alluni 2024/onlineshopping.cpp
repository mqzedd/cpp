#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    vi e;
    cin >> a >> b;
    while (a--)
    {
        cin >> c >> d;
        d = c - d;
        e.push_back(d);
    }
    sort(e.begin(), e.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += e[i];
    }
    cout << sum;
}