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
    set<string> s{};
    cin >> a;
    while (a--)
    {
        unordered_set<char> temp;
        cin >> b;
        sort(b.begin(), b.end());
        s.insert(b);
    }
    cout << s.size();
}