#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    vector<int> s(m,0), p(m,0);
    string DNA = "ACGT";
    auto read = [&](vector<int>& target){
        for (int i = 0; i < n; ++i){
            string cur;
            cin >> cur;
            for (int j = 0; j < m; ++j){
                auto x = cur[j];
                target[j] |= 1<<(DNA.find_first_of(x));
            }
        }
    };
    read(s);
    read(p);
    int count  = 0;
    for (int i = 0; i < m; ++i){
        if(!(s[i] & p[i])) count++;
    }
    cout << count << "\n";
}