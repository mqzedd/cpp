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

    bool isDisjoint(unordered_set<string> & a,unordered_set<string> & b){
        if(sz(a) > sz(b)) return isDisjoint(b,a);
        for(const auto &x : a){
            if(b.count(x)) return false;
        }
        return true;
    }
    void setIO(const string& name) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
    int32_t main()
    {
        cin.tie(0)->sync_with_stdio(0);
        // cin.exceptions(cin.failbit);
        setIO("cownomics");
        int n,m; cin >> n >> m;
        vector<string> s(n),p(n);
        for(auto &x : s) cin >> x;
        for(auto &x : p) cin >> x; 
        unordered_set<string> t1,t2;
        string temp;
        int count = 0;
        rep(i,0,m){
            rep(j,i+1,m){
                rep(k,j+1,m){
                    
                    t1.clear();
                    t2.clear();
                    rep(x,0,n){
                        temp = "";
                        temp += s[x][i];
                        temp += s[x][j];
                        temp += s[x][k];
                        t1.insert(temp);
                        temp = "";
                        temp += p[x][i];
                        temp += p[x][j];
                        temp += p[x][k];
                        t2.insert(temp);
                    }
                    if(isDisjoint(t1,t2)) count++;
                }
            }
        }
        cout << count << endl;
    }