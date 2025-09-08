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
    ll a;
    cin >> a;
    ll b;
    ll sum = 0;
    while (a--)
    {
        cin >> b;
        sum += b;
    }
    if (sum % 5 != 0)
    {
        cout << "Slay!";
    }
    else
    {
        cout << "Cooked :(";
    }
}