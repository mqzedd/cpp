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
    int k{};
    int count{};
    unordered_map<int, int> p;
    cin >> a >> k;
    while (a--)
    {
        cin >> b;
        count += p[b + k];
        if (k != 0)
        {
            count += p[b - k];
        }

        p[b]++;
    }
    cout << count;
}