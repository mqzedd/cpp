#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll n; cin >> n;
    vi val(n+1);
    rep(i,0,n){
        cin >> val[i+1]; 
    }
    vector<vi> adj(n+1);
    ll u,v;
    rep(i,0,n-1){
        cin >> u >> v;
        adj[u].push_back(v);
    }
    stack<pii> dfs; dfs.push({1,val[1]});
    ll m = INT_MIN;
    while(!dfs.empty()){
        auto curr = dfs.top();
        dfs.pop();
        if(adj[curr.first].empty()){
            m = max(m,curr.second);
        }else{
            for(auto x : adj[curr.first]){
                dfs.push({x,curr.second + val[x]});
            }
        }
    }
    cout << m << endl;
}