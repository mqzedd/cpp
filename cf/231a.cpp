#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    cin >> a;
    int b, c, d;
    int total = 0;
    while (a--)
    {
        cin >> b >> c >> d;
        if (b + c + d > 1)
        {
            total++;
        }
    }
    cout << total;
}