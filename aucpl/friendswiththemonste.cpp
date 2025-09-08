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
    int bx, by;
    cin >> bx >> by;
    cin >> a;
    vector<int> d;
    while (a--)
    {
        cin >> b >> c;
        d.emplace_back(abs(b - bx) + abs(c - by));
    }
    sort(d.begin(), d.end());
    if (abs(bx) + abs(by) < d[0])
    {
        cout << "Yes! We did it!";
    }
    else
    {
        cout << "Oh no! The zombies ate your brains!";
    }
}