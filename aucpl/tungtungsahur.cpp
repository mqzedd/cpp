#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a;
    cin >> a;
    ll currentnum;
    stack<ll> stk;
    ll current = 1;
    for (int i = 0; i < a; i++)
    {
        cin >> currentnum;
        while (stk.size() != 0 and stk.top() == current)
        {
            stk.pop();
            current++;
        }
        if (currentnum == current)
        {
            current++;
            while (stk.size() != 0 and stk.top() == current)
            {
                stk.pop();
                current++;
            }
        }
        else
        {
            stk.push(currentnum);
        }
    }
    if (current - 1 == a)
    {
        cout << "Tung Tung Tung";
    }
    else
    {
        cout << "Mamma Mia!";
    }
}
