
#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int m{};
    cin >> m;
    return m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    int aa{};
    int bb{};

    char b{};
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    stack<int> sk{};
    cin >> a;
    while (a--)
    {
        cin >> b;
        if (find(v.begin(), v.end(), b) != v.end())
        {
            sk.push(b - '0');
        }
        else if (!sk.empty())
        {
            if (b == '+')
            {
                if (sk.size() >= 2)
                {
                    aa = sk.top();
                    sk.pop();
                    bb = sk.top();
                    sk.pop();
                    sk.push(aa + bb);
                }
                else
                {
                    cout << "INVALID" << '\n';
                    break;
                }
            }
            else if (b == 'B')
            {
                sk.pop();
            }
            else if (b == 'C')
            {
                sk = {};
            }
            else if (b == 'T')
            {
                aa = sk.top();
                sk.pop();
                sk.push(aa / 3);
            }
            else if (b == 'D')
            {
                aa = sk.top();
                sk.pop();
                sk.push(aa * 2);
            }
            else
            {
                cout << "INVALID" << '\n';
                break;
            }
        }
        else
        {
            cout << "INVALID" << '\n';
            break;
        }
    }
    if (sk.size() != 1)
    {

        cout << "INVALID" << '\n';
    }
    else
    {
        cout << sk.top() << '\n';
    }
}