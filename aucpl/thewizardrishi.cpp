#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    ll left = 0;
    ll mlength = 0;
    unordered_set<char> word;
    for (int right = 0; right < s.length(); right++)
    {
        while (word.find(s[right]) != word.end())
        {
            word.erase(s[left]);
            left++;
        }
        word.insert(s[right]);
        mlength = max(mlength, right - left + 1);
    }
    cout << mlength << '\n';
}