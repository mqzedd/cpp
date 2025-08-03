
#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int m{};
    cin >> m;
    return m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    int b{};
    int highest{};
    vector<int> v{};
    cin >> a;
    while (a--)
    {
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(), v.end());
    highest = v.back();
    while (highest == v.back())
    {
        v.pop_back();
    }
    cout << count(v.begin(), v.end(), v.back());
}