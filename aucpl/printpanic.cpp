#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    int b, c;
    string e;
    auto glambda = [](auto a, auto b)
    { return a.second < b.second && a.second != b.second; };
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, decltype(glambda)> d(glambda);
    cin >> a;
    while (a--)
    {
        cin >> e;
        if (e == "print")
        {
            if (d.empty())
            {
                cout << "ERROR\n";
                continue;
            }
            else
            {
                auto [i, j] = d.top();
                cout << i << '\n';
                d.pop();
            }
        }
        else
        {
            b = stoi(e);
            cin >> c;
            d.emplace(b, c);
        }
    }
}