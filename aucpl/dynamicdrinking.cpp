#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{1};
    int b{};
    string c{};
    int s{10000};
    int sm{10000};
    string sd{};
    string drink{};

    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        if (b < s)
        {
            sm = s;
            s = b;
            sd = drink;
            drink = c;
        }
        else if (b < sm)
        {
            sm = b;
            sd = c;
        }
    }
    cout << sd;
}