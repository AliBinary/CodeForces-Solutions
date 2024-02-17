/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 17.02.2024 11:47:30
*/

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define endl '\n'
#define sep ' '
typedef long long ll;
typedef long double ld;
typedef string str;

// pairs
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef pair<int, pii> pip;
typedef pair<pii, pii> ppp;
#define F first
#define S second
#define mp make_pair

// vectors
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) int(x.size())
#define pb push_back
#define eb emplace_back

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, b) FOR(i, 0, b)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, b) ROF(i, 0, b)
#define rep(a) F0R(_, a)
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

// etc.
#define kill(x) return cout << x << endl, 0
#define lc id << 1
#define rc id << 1 | 1
#define getbit(x, i) (((x) >> (i)) & 1)
#define popcount(x) (__builtin_popcount(x))

bool cmp_pair(const pair<int, int> &a,
              const pair<int, int> &b)
{
    return (a.second < b.second);
}

void solve();

str capitalize(str word)
{
    for (auto &c : word)
        c = tolower(c);

    word[0] = toupper(word[0]);

    return word;
}

str all_upper(str word)
{
    for (auto &c : word)
        c = toupper(c);

    return word;
}

str swap_case(str word)
{
    FOR(i, 0, sz(word))
    {
        if (isupper(word[i]))
            word[i] = tolower(word[i]);
        else
            word[i] = toupper(word[i]);
    }
    return word;
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
    str word;
    cin >> word;
    if (word == swap_case(capitalize(word)) or all_upper(word) == word)
        cout << swap_case(word);
    else
        cout << word;
}