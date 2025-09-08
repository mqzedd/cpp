#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a;
    queue<int> messages;
    while (a--)
    {
        cin >> b;
        if (messages.size())
            while (messages.size() && (b - messages.front() > 10))
            {
                messages.pop();
            }
        if (messages.size() != 5)
        {
            cout << "ACCEPTED\n";
            messages.push(b);
        }
        else
        {
            cout << "DENIED\n";
        }
    }
}