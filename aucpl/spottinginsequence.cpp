
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
    long long a{};
    long long b{};
    cin >> a;
    cin >> b;
    long long c{};
    bool found{false};
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        if (a == c)
        {
            cout << i << '\n';
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "-1\n";
    }
}