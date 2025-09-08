#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
void setIO(const string &name)
{
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}
int main()
{
    setIO("word");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, k;
    cin >> a >> k;
    string b;
    vector<string> c;
    while (a--)
    {
        cin >> b;
        c.push_back(b);
    }
    int len = 0;
    string cur = "";

    for (auto &i : c)
    {
        if (len + i.size() > k)
        {
            cout << cur << '\n';
            cur = "";
            len = i.size();
            cur += i;
            continue;
        }
        if (cur != "")
            cur += " ";
        cur += i;
        len += i.size();
    }
    cout << cur;
}