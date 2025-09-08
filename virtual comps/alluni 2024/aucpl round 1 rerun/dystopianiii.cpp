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
    ll a, b;
    cin >> a >> b;
    ll temp;
    ll maxmin = 0;
    ll sum = 0;
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
        {
            maxmin = 10000;
            for (int j = 0; j < b; j++)
            {
                cin >> temp;
                if (temp < maxmin)
                    maxmin = temp;
            }
        }
        else
        {

            maxmin = -10000;
            for (int j = 0; j < b; j++)
            {
                cin >> temp;
                if (temp > maxmin)
                    maxmin = temp;
            }
        }
        sum += maxmin;
    }
    cout << sum;
}