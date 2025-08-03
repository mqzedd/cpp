
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
    int k{};
    cin >> a;
    cin >> k;
    int b{};
    vector<int> students{};
    while (a--)
    {
        cin >> b;
        students.push_back(b);
    }

    int count = 0;
    vector<pair<int, int>> combo{};
    unordered_map<int, int> combos{};
    for (int i = 0; i < int(students.size()); i++)
    {
        for (int j = i + 1; j < int(students.size()); j++)
        {
            if ((students[j] == students[i] + k) || students[j] == students[i] - k)
                count++;
        }
    }
    cout << count;
}