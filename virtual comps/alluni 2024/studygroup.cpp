#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    string name, friends;
    map<string, vector<string>> friendships;
    string start = "";
    int b;
    set<string> studying;
    cin >> a;
    while (a--)
    {
        cin >> name >> b;

        if (start == "")
        {
            start = name;
        }
        while (b--)
        {
            cin >> friends;
            friendships[name].push_back(friends);
        }
    }
    studying.insert(start);
    set<string> temp;
    int day = 6;
    while (day--)
    {

        set<string> temp;
        for (auto &i : studying)
        {
            for (auto &j : friendships[i])
            {
                temp.insert(j);
            }
        }
        studying.merge(temp);
    }
    cout << studying.size();
}