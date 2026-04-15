#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vll c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    double v;
    double m = 0.0;

    for (int i = 0; i < n; i++)
    {
        cin >> v;
        m = max(m, v * c[i]);
    }
    cout << fixed << setprecision(3) << m << '\n';
}