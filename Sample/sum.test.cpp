#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include "sum.cpp"

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const int MOD = 1000000007;
const ll INFL = (1ll << 60);
//cout << setprecision(20) << 

int main() {
    ll a, b; cin >> a >> b;
    cout << sum(a, b) << endl;
}