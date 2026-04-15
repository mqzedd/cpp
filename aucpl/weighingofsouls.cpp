#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, X;
    cin >> N >> X;

    vector<long long> W(N);
    for (auto &cow : W)
    {
        cin >> cow;
    }

    vector<long long> prefix(N + 1);
    for (int i = 1; i <= N; ++i)
    {
        prefix[i] = W[i - 1] + prefix[i - 1];
    }

    unordered_map<long long, long long> mp;
    mp.reserve(N);
    int count = 0;
    for (int i = 0; i <= N; ++i)
    {
        if (mp.count(prefix[i]))
        {
            count += mp[prefix[i]];
        }

        mp[X + prefix[i]]++;
    }

    cout << count << '\n';
}