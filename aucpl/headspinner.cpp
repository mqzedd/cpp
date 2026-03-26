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
    int n;
    if (!(cin >> n))
        return 0;
    vector<string> s(n);
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        for (auto l : s[i])
        {
            if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
            {
                v[i]++;
            }
        }
    }
    int target = v[0] % 2;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != target)
        {
            reverse(s[i].begin(), s[i].end());
        }
        cout << s[i] << "\n";
    }
    return 0;
}