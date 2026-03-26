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
    ll a;
    ll b;
    ll score;
    ll time;
    ll mscore = -1;
    ll mtime = 2e18;
    cin >>
        a;
    while (a--)
    {
        score = 0;
        time = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> b;
            if (b == -1)
            {
                continue;
            }
            else
            {
                score++;
                time += b;
            }
        }
        if (score > mscore || (score == mscore && time < mtime))
        {
            mscore = score;
            mtime = time;
        }
    }
    cout << mscore << ' ' << mtime;
}