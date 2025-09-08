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
    string b{};
    string peace = "PEACE";
    cin >> a;
    cin >> b;
    while (b.size() != 0 and peace.size() != 0)
    {
        if (b.front() == peace.front())
        {
            peace.erase(peace.begin());
            continue;
        }
        b.erase(b.begin());
    }
    if (peace == "")
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}