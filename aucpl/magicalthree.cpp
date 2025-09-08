
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
    string b{};
    vector<char> lower = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> upper = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    cin >> a >> b;
    for (int i = 0; i < b.size(); i++)
    {
        if ((i + 1) % 3 != 0)
        {
            cout << b[i];
        }
        else
        {
            int index{};
            for (int j = 0; j < lower.size(); j++)
            {
                if (lower[j] == b[i])
                {
                    cout << upper[j];
                }
            }
        }
    }
}