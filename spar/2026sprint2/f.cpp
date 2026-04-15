#include <bits/stdc++.h>
#include <bit>
#include <bitset>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using ull = unsigned ll;
#define f first
#define s second
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()

int main()
{
    ull n;
    cin >> n;
    cout << bit_ceil((ull)bit_width(n)) << (n == 1 ? " bit" : " bits");
}