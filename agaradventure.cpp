#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a{1};
    ll b{};
    ll c{};
    vll blob{};
    cin >> b >> a;
    while (a--)
    {
        cin >> c;
        blob.push_back(c);
    }
    sort(blob.begin(), blob.end());
    for (auto &i : blob)
    {
        if (i < b)
        {
            b += i;
        }
        else
        {
            cout << "L Bozo.";
            return 0;
        }
    }
    cout << "Yes!";
}