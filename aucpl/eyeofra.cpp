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
    string a;
    cin >> a;
    ll six = 0;
    ll count = 0;
    for (auto x : a)
    {
        if (x == '6')
        {
            six++;
        }
        if (x == '7' && six > 0)
        {
            six--;
            count++;
        }
    }
    cout << count << '\n';
}