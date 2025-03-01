#include <iostream>
#define ll long long
using namespace std;

ll GCD(ll a, ll b){
    if (b == 0) return a;
    return GCD(b, a%b);
}

ll LCM(ll a, ll b){
    return (a*b) / GCD(a, b);
}

int main(){
    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;

    int gcdab = GCD(A,B);
    int gcdcd = GCD(C,D);
    A = A/gcdab;
    B = B/gcdab;
    C = C/gcdcd;
    D = D/gcdcd;

    ll lcm = LCM(B,D);

    cout << A*(lcm/B) + C*(lcm/D) << " " << lcm;
    return 0;
}