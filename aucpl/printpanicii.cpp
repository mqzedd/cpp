#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int time{};
    int id, priority;
    string print;
    priority_queue<tuple<ll, ll, ll>> print_queue;
    cin >> time;
    while (time--)
    {
        cin >> print;
        if (print == "print")
        {
            if (print_queue.empty())
            {
                cout << "ERROR\n";
                continue;
            }
            else
            {
                auto [_, _2, cur_id] = print_queue.top();
                cout << cur_id << '\n';
                print_queue.pop();
            }
        }
        else
        {
            id = stoi(print);
            cin >> priority;
            print_queue.emplace(priority, time, id);
        }
    }
}