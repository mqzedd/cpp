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
        set<ll> esc;
        rep(i,0,n){
            ll c; cin >> c;
            auto lower = lower_bound(all(esc),c);
            if(lower != esc.end()){
                auto nw = *lower;
                // cerr << "VALUE " << nw << ' ' << c << endl;
                if(nw != c){
                esc.erase(nw);
                esc.insert(c);}
            }else{
                esc.insert(c);
            }
        }
        // cerr << "DEBUG\n";
        // for(auto x : esc){
        //     cerr << x << ' ';
        // }
        // cout << endl;
        ll answer = sz(esc);
        cout << answer << endl;
    
}