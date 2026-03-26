#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, c, d;
    cin >> a >> b >> c;
    deque<int> e;
    while (a--)
    {
        cin >> d;
        e.push_back(d);
    }
    ll t1, t2;
    while (b--)
    {
        t1 = e.front();
        t2 = e.back();
        e.pop_back();
        e.pop_front();
        e.push_front(t2);
        e.push_front(t1);
    }
    cout << e[c];
}