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
    ll t;
    string b;
    stack<int> nums;
    cin >> t;
    while (t--)
    {
        cin >> b;
        if (b == "B")
        {
            if (nums.empty())
            {
                cout << "INVALID\n";
            }
            else
            {
                nums.pop();
            }
        }

        if (b == "T")
        {
            if (nums.empty())
            {
                cout << "INVALID\n";
            }
            else
            {
                int c = nums.top();
                nums.pop();
                nums.push(c / 3);
            }
        }

        if (b == "D")
        {
            if (nums.empty())
            {
                cout << "INVALID\n";
            }
            else
            {
                int c = nums.top();
                nums.pop();
                nums.push(c * 2);
            }
        }
    }
}