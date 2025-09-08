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
    string b;
    int d;
    unordered_map<string, int> c;
    cin >> a;
    while (a--)
    {
        cin >> b >> d;
        if (!c.count(b))
        {
            c[b] = d;
            cout << "Play " << b << '\n';
            continue;
        }
        if (c[b] < d)
        {
            c[b] = d;
            cout << "Play " << b << '\n';
        }
        else
        {

            c[b] = d;
            cout << "Skip " << b << '\n';
        }
    }
}