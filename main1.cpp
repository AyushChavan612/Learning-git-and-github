#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define nn "\n\n"
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define dbg(x) cout << #x << " = " << x << '\n'
#define nl  '\n'
#define dbgloop(a)  for(auto&x : a) cout << x << " ";
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define pi pair<int,int>
#define pl pair<long long , long long>
#define ff first
#define ss second
#define printfTOcout cout.tie(0)
#define scanfTOcin cin.tie(0)
#define OPTIMIZING ios_base::sync_with_stdio(0)

template<typename T1, typename T2>
// cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) {
    return (istream >> p.first >> p.second);
}

template<typename T>
// cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v) {
    for (auto &it : v) cin >> it;
    return istream;
}

template<typename T1, typename T2>
// cout >> pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) {
    return (ostream << p.first << " " << p.second);
}

template<typename T>
// cout >> vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) {
    for (auto &it : c) cout << it << " ";
    return ostream;
}

template<typename T>
// cin >> vector<vector<T>>
istream& operator>>(istream &istream, vector<vector<T>> &v) {
    for (auto &row : v) {
        for (auto &elem : row) {
            istream >> elem;
        }
    }
    return istream;
}

template<typename T>
// cout >> vector<vector<T>>
ostream& operator<<(ostream &ostream, const vector<vector<T>> &c) {
    for (const auto &row : c) {
        for (const auto &elem : row) {
            ostream << elem << " ";
        }
        ostream << nl;
    }
    return ostream;
}

void Error404() {
}

int32_t main() {
    OPTIMIZING;
    printfTOcout;
    scanfTOcin;

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Test Case #" << tc << ":" << endl;
        Error404();
        cout << nn;
    }
    return 0;
}