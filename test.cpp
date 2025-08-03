#include <bits/stdc++.h>
using namespace std;

// Type aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// Macros
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define ff first
#define ss second

// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;         // or 998244353
const int dx[4] = {0, 1, 0, -1}; // for 4-direction grid traversal
const int dy[4] = {1, 0, -1, 0};

// Debug (disable for online judges)
#ifdef LOCAL
#define dbg(x)           \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << endl;
#else
#define dbg(x)
#endif

// Debug helpers
template <typename T>
void _print(T x) { cerr << x; }
template <typename T, typename V>
void _print(pair<T, V> p)
{
    cerr << "(";
    _print(p.ff);
    cerr << ", ";
    _print(p.ss);
    cerr << ")";
}
template <typename T>
void _print(vector<T> v)
{
    cerr << "[";
    for (auto x : v)
    {
        _print(x);
        cerr << " ";
    }
    cerr << "]";
}
template <typename T>
void _print(set<T> s)
{
    cerr << "{";
    for (auto x : s)
    {
        _print(x);
        cerr << " ";
    }
    cerr << "}";
}
template <typename T, typename V>
void _print(map<T, V> m)
{
    cerr << "{";
    for (auto p : m)
    {
        _print(p);
        cerr << " ";
    }
    cerr << "}";
}

// Main driver
int main()
{
    fastio();
    int t = 1;
    // cin >> t; // Uncomment for multiple test cases
    while (t--)
    {
        // solve();
    }
    return 0;
}