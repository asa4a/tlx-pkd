#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

vector <ll> convert(ll n, ll b){
    vector <ll> ret;
    while (n > 0){
        ret.push_back(n % b);
        n /= b;
    }
    return ret;
}

int main(){
    int N, B; cin >> N; cin >> B;
    vector <ll> res = convert(N, B);
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++){
        cout << res[i];
    }
}