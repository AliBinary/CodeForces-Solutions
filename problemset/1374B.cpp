/*
    *** In The Name Of GOD ***
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.11.2024 22:19:37
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define sep ' '
typedef long long ll;
typedef long double ld;
typedef string str;

// pairs
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F first
#define S second
#define mp make_pair

#define tcT template <class T
tcT > using V = vector<T>;

// vectors
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x));
#define sor_(x) sort(rall(x));
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
tcT > void remDup(vector<T> &v) { sort(all(v)), v.erase(unique(all(v)), end(v)); }      // sort and remove duplicates
#define cpresent(container, element) (find(all(container), element) != container.end()) // vector

// sets
#define present(container, element) (container.find(element) != container.end()) // set/map
#define lb lower_bound
#define ub upper_bound
tcT > int lwb(V<T> &a, const T &b) { return int(lb(all(a), b) - bg(a)); }
tcT > int upb(V<T> &a, const T &b) { return int(ub(all(a), b) - bg(a)); }

// maps
typedef map<int, int> mii;
typedef map<str, int> msi;

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, b) FOR(i, 0, b)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define R0F(i, b) ROF(i, 0, b)
#define rep(n) FOR(_, 0, n)
#define each(x, a) for (auto &x : a)
#define tr(it, container) \
    for (typeof(container.begin()) it = container.begin(); it != container.end(); ++it)

// debug
#define debug(x) cerr << #x << '=' << (x) << endl;
#define debugp(x) cerr << #x << "= {" << (x.first) << ", " << (x.second) << "}" << endl;
#define debug2(x, y) cerr << "{" << #x << ", " << #y << "} = {" << (x) << ", " << (y) << "}" << endl;
#define debugv(v)             \
    {                         \
        cerr << #v << ": ";   \
        for (auto x : v)      \
            cerr << x << ' '; \
        cerr << endl;         \
    }
#define wall cout << "----------------------------------------\n";
#define kill(x)            \
    {                      \
        cout << x << endl; \
        return;            \
    }

// Etc...
#define PI 3.14159265358979323846
#define MOD 1000000007
const int inf = std::numeric_limits<int>::max();
const ll INF = std::numeric_limits<ll>::max();
const ld epsilon = 1. / INF;
bool cmp(pii &a, pii &b) { return (a.second < b.second); }

void solve()
{
    ll n;
    cin >> n;
    int ans = 0;
    while (n != 1)
    {
        if (n % 3 != 0)
            kill(-1);
        ans++;
        if (n % 6 == 0)
            n /= 6;
        else
            n *= 2;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */