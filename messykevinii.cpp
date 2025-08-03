
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    string b{};
    cin >> a;
    cin.ignore();
    map<string, int> warn{};
    for (int i = 0; i < a; i++)
    {
        getline(cin, b);
        warn[b]++;
    }
    for (auto x : warn)
    {
        auto [c, d] = x;
        cout << c << ' ' << d << '\n';
    }
}