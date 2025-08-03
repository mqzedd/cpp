
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
    int b{};
    vector<long long> nums{};
    cin >> a;
    while (a--)
    {
        cin >> b;
        nums.push_back(b);
    }
    sort(nums.begin(), nums.end(), [](auto &lhs, auto &rhs)
         {
        if (lhs % 10 != rhs % 10)
        
            return lhs % 10 < rhs % 10;
        
        else return (lhs <rhs); });
    for (auto x : nums)
    {
        cout << x << ' ';
    }
}