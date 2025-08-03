
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
    vector<int> els{};
    stack<int> monostack{};
    cin >> a;
    while (a--)
    {
        cin >> b;
        els.push_back(b);
    }
    for (int x : els)
    {
        while (!monostack.empty() && x > monostack.top())
        {
            monostack.pop();
        }
        monostack.push(x);
    }
    cout << monostack.size();
}