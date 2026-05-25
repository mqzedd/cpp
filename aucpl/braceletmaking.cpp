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
    deque<char> bracelet;
    string action,direction;
    char message;
    ll steps;
    rep(i,0,n){
        cin >> action >> direction;
        if(action == "INSERT"){
            cin >> message;
            if(direction == "LEFT"){
                bracelet.push_front(message);
            }
            else{
                bracelet.push_back(message);
            }
        }
        else{
            cin >> steps;
            if(direction != "LEFT"){
                rep(i,0,steps){
                    char temp = bracelet.front();
                    bracelet.pop_front();
                    bracelet.push_back(temp);
                }
            }else{
                rep(i,0,steps){
                    char temp = bracelet.back();
                    bracelet.pop_back();
                    bracelet.push_front(temp);
                }
            }
        }
    }
    for(auto x : bracelet){
        cout << x;
    }
    cout << endl;
}