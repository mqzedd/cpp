
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
    string b{};
    set<string> names{};
    cin >> a;
    while (a--)
    {
        cin >> b;
        if (!names.contains(b))
        {
            names.insert(b);
        }
        else
        {
            cout << b << '\n';
        }
    }
}