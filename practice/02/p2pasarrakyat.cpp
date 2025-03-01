#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;

ll GCD(ll a, ll b){
    if (b == 0) return a;
    return GCD(b, a%b);
}

ll LCM(ll a, ll b){
    return (a*b) / GCD(a, b);
}

int main(){
    int N;
    vector <ll> D;
    cin >> N;

    for (int i = 0; i < N; i++){
        ll d; cin >> d;
        D.push_back(d);
    }

    sort(D.begin(), D.end());

    ll gcd = GCD(D[0],D[1]);
    ll lcm = (D[0] * D[1])/gcd;
    for (int i = 2; i < N; i++){
        gcd = GCD(lcm, D[i]);
        lcm = (lcm*D[i])/gcd;
    }

    cout << lcm;
}