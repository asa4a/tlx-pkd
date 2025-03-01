#include <iostream>
#define ll long long int
using namespace std;

ll INF = 1000000007;

ll fact[1001];

ll power(ll a, ll b){
    a %= INF;
    if (a == 0) return 0;
    ll akhir = 1;
    while (b > 0){
        if (b % 2 == 1){
            akhir *= a;
            akhir %= INF;
            --b;
        }
        a *= a;
        a %= INF;
        b /= 2;
    }
    return akhir;
}

void fak(){
    fact[0] = 1;
    for (ll i = 1; i <= 1000; i++){
        fact[i] = (fact[i - 1] * i) % INF;
    }
}

ll inv(ll a){
    return power(a, INF-2);
}

ll C(ll n, ll r){
    return (fact[n] % INF * inv(fact[r]) % INF * inv(fact[n-r]) % INF) % INF;
}

int main(){
    fak();
    ll N, A, B; cin >> N >> A >> B;

    ll res = 0;
    for (ll i = A; i <= B; i++){
        res += C(N,i) % INF;
    }

    cout << res % INF;
}