#include <iostream>
#define ll long long int
using namespace std;

ll INF = 17;

ll fact[18];

void fak(){
    fact[0] = 1;
    for (ll i = 1; i <= 17; i++){
        fact[i] = (fact[i - 1] * i);
    }
}

ll C(ll n, ll r){
    if (n < r){
        return 0;
    }
    return (fact[n] * 1/(fact[r]) * 1/(fact[n-r]));
}

int main(){
    fak();

    int N, x, y;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> x >> y;
    }

    cout << C(N,3);
}