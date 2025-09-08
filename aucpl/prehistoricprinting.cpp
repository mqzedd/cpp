
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    string b{};
    queue<string> q{};
    cin >> a;
    cin.ignore();
    while (a--)
    {
        std::getline(std::cin, b);

        q.push(b);
    }
    while (!q.empty())
    {
        b = q.front();
        if (b.length() > 80)
        {

            q.push(b.substr(80));
            q.pop();
            cout << b.substr(0, 80) << '\n';
        }
        else
        {
            cout << b << '\n';
            q.pop();
        }
    }
}