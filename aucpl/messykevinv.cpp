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
    string a, b;
    cin >> a >> b;
    string d;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] == '1' || b[i] == '1')
        {

            d += '1';
        }
        else
        {
            d += '0';
        }
    }
    vector<string> e = {"0111111", "0000110", "1011011", "1001111", "1100110", "1101101", "1111101", "0000111", "1111111", "1101111"};
    ll f = e.size();
    while (f--)
    {

        if (e[f] == d)
        {
            cout << f;
            return 0;
        }
    }
    cout << "-1";
}
