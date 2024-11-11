/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 26.03.2024 17:31:26
*/
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#define endl '\n'
#define sep ' '
typedef long long ll;
typedef long double ld;
typedef string str;

// pairs
typedef pair<ld, ld> pdd;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef pair<int, pii> pip;
typedef pair<pii, pii> ppp;
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
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound
tcT > int lwb(V<T> &a, const T &b) { return int(lb(all(a), b) - bg(a)); }
tcT > int upb(V<T> &a, const T &b) { return int(ub(all(a), b) - bg(a)); }

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, b) FOR(i, 0, b)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define R0F(i, b) ROF(i, 0, b)
#define rep(n) FOR(_, 0, n)
#define each(x, a) for (auto &x : a)

// debug
#define debug(x) cerr << #x << '=' << (x) << endl;
#define debugp(x) cerr << #x << "= {" << (x.first) << ", " << (x.second) << "}" << endl;
#define debug2(x, y) cerr << "{" << #x << ", " << #y << "} = {" << (x) << ", " << (y) << "}" << endl;
#define debugv(v)             \
    {                         \
        cerr << #v << " : ";  \
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

// bitwise ops
constexpr int pct(int x) { return __builtin_popcount(x); }               // # of bits set
constexpr int bits(int x) { return x == 0 ? 0 : 31 - __builtin_clz(x); } // floor(log2(x))
constexpr int p2(int x) { return 1 << x; }
constexpr int msk2(int x) { return p2(x) - 1; }
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); }                     // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }                     // divide a by b rounded down
tcT > bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }                // set a = min(a,b)
tcT > bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }                // set a = max(a,b)
tcT > void remDup(vector<T> &v) { sort(all(v)), v.erase(unique(all(v)), end(v)); } // sort and remove duplicates
tcT > bool cmp(const T &a, const T &b) { return (a.second < b.second); }

const int inf = std::numeric_limits<int>::max();
const ll INF = std::numeric_limits<ll>::max();
void solve();
bool isprime(int n)
{
    // corner case
    if (n <= 1)
        return false;
    // check from 2 to sqrt(n)
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int x = a;
    FOR(i, a + 1, b + 1)
    {
        if (isprime(i))
        {
            x = i;
            break;
        }
    }
    if (x == b)
        kill("YES");
    kill("NO");
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */