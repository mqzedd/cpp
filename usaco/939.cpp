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
    setIO("buckets");
    // ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{10};
    string b;
    int ri = 0, rj = 0, bi = 0, bj = 0, li = 0, lj = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> b;
        for (int j = 0; j < (int)b.size(); j++)
        {
            if (b[j] == 'B')
            {
                bi = i;
                bj = j;
            }

            if (b[j] == 'R')
            {
                ri = i;
                rj = j;
            }
            if (b[j] == 'L')
            {
                li = i;
                lj = j;
            }
        }
    }
    int dist = 0;
    if (li == ri && ri == bi &&

        ((lj < rj && rj < bj) ||

         (bj < rj && rj < lj)))
    {

        dist += 2;
    }
    else if (lj == rj && rj == bj &&

             ((li < ri && ri < bi) ||

              (bi < ri && ri < li)))
    {

        dist += 2;
    }
    dist += abs(li - bi) + abs(lj - bj) - 1;
    cout << dist;
}
