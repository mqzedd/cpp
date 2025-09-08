#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
void setIO(const string &name)
{
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}
int main()
{
    setIO("cowsignal");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    string d;
    cin >> a >> b >> c;
    while (a--)
    {
        cin >> d;
        for (int k = 0; k < c; k++)
        {
            for (char i : d)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << i;
                }
            }
            cout << '\n';
        }
    }
}