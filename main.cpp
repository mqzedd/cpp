
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
    cerr << "test\n";
    long long t = 1;
    cin >> t;
    long long sum = 0;
    long long a = 0;
    while (t--)
    {
        cin >> a;
        sum += a;
    }
    cerr << sum << '\n';
    if (sum % 5 != 0)
    {
        cout << "Slay!";
    }
    else
    {
        cout << "Cooked :(";
    }
}