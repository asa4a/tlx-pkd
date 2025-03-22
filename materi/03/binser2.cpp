#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int unsigned
using namespace std;
vector <ll> A;

void solve(){
    int Q; cin >> Q;
    while(Q--){
        int x; cin >> x;
        int idx = lower_bound(A.begin(), A.end(), x) - A.begin();
        cout << idx + 1 << endl;
    }
}

int main(){
    int N; cin >> N;
    ll sum = 0;
    while(N--){
        ll tmp; cin >> tmp;
        sum += tmp;
        A.push_back(sum);
    }
    solve();
}