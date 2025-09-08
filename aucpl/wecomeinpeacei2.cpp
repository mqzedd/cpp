#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{1};
    string b{};
    cin >> a;
    cin >> b;
    string peace = "PEACE";
    int i = 0;
    for (char c : b)
    {
        if (c == peace[i])
            i++;
        if (i == peace.size())
            break;
    }
    cout << (i == peace.size() ? "Yes" : "No") << '\n';
}