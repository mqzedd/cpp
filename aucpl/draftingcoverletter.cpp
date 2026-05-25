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
    string action, text;
    string outpt;
    int ptr = -1;
    int places;
    rep(i,0,n){
        cin >> action;
        if(action != "ADD"){
            cin >> places;
            if(action == "DEL"){
            ptr -= places;
            outpt.erase(ptr,places);}
            else if (action == "RIGHT"){
                ptr = min(sz(outpt),ptr + places);
            }
            else if (action == "LEFT"){
                ptr = max((ll)0,ptr - places);
            }
        }else{
            cin >> text;
            ptr += sz(text);
            outpt.insert(ptr,text);
        }
    }
}