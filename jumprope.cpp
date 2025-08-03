
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
    queue<int> q{};
    cin >> a;
    while (a--)
    {
        cin >> b;
        q.push(b);
    }
    int counter{100};
    while (q.size() != 1)
    {
        a = q.front();
        q.pop();
        counter -= a;
        // cerr << counter << '\n';

        if (counter <= 0)
        {
            counter = 100;
            // cerr << q.size() << '\n';
        }
        else
        {
            q.push(a);
        }
    }
    cout << q.front() << '\n';
}