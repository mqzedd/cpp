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
    setIO("speeding");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    vi speedlimit(100);
    vi speed(100);
    int c, d;
    int dist = 0;
    while (a--)
    {
        cin >> c >> d;
        for (int i = dist; i < dist + c; i++)
        {
            speedlimit[i] = d;
        }

        dist += c;
    }

    dist = 0;
    while (b--)
    {
        cin >> c >> d;
        for (int i = dist; i < dist + c; i++)
        {
            speed[i] = d;
        }

        dist += c;
    }
    int maxd = 0;
    for (int i = 0; i < 100; i++)
    {
        maxd = max(maxd, speed[i] - speedlimit[i]);
    }
    cout << maxd;
}