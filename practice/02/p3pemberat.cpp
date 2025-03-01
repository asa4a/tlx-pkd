#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ll B, K; cin >> B >> K;
    ll miaw = K-B;
    
    vector <ll> kwek;
    while (miaw > 0){
        kwek.push_back(miaw % 2);
        miaw /= 2;
    }

    for (ll i = kwek.size()-1; i >= 0; i--){
        if (kwek[i] == 1){
            ll waw = 1;
            for (ll j = 1; j <= i; j++){
                waw *= 2;
            }
            cout << waw << "\n";
        }
    }
}