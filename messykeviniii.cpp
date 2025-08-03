
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
    int h{};
    string b{};
    string c{};
    cin >> h;
    cin.ignore();
    std::getline(std::cin, b);
    for (char x : b)
    {
        c.push_back(x);
        if (c.size() >= 2 && c.substr(c.length() - 2) == "//")
        {
            c.pop_back();
        }
        if (c.size() >= 3 && c.substr(c.length() - 3) == "/..")
        {
            c.pop_back();

            c.pop_back();

            c.pop_back();

            c.pop_back();
            while (c.back() != '/')
            {
                c.pop_back();
            }
        }
        if (c.size() >= 3 && c.substr(c.length() - 3) == "/.")
        {
            c.pop_back();

            c.pop_back();
        }
    }
    cout << c << '\n';
}