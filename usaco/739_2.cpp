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

    
    void setIO(const string& name) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
    int32_t main()
    {
        
    int D[256]; D['A'] = 0; D['C'] = 1; D['G'] = 2; D['T'] = 3;
        cin.tie(0)->sync_with_stdio(0);
        // cin.exceptions(cin.failbit);
        setIO("cownomics");
        int n,m; cin >> n >> m;
        vector<string> s(n),p(n);
        for(auto &x : s) cin >> x;
        for(auto &x : p) cin >> x;
        int count = 0;
        rep(i,0,m){
            rep(j,i+1,m){
                rep(k,j+1,m){
                    bool seen[64] = {false};
                    rep(x,0,n){
                        int code = ((D[(s[x][i])] << 4) + (D[(s[x][j])] << 2) + D[(s[x][k])]);
                            
                    }
                    bool dj = true;
                    rep(x,0,n){
                        int code = ((D[(p[x][i])] << 4) + (D[(p[x][j])] << 2) + D[(p[x][k])]);
                        if(seen[code]){
                            dj = false;
                            break;
                        }
                    }
                    if(dj) count++;
                }
            }
        }
        cout << count << endl;
    }