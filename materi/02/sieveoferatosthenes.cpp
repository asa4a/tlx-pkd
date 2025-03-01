#include <iostream>
#include <vector>
#define ll long long
using namespace std;

const ll MAX = 1000000;
vector <bool> arr (MAX, false);
vector <ll> pl;

void sop(){
    for (ll i = 2; i < MAX; i++){
        if (!arr[i]){
            pl.push_back(i);
            for (ll j = i*i; j < MAX; j += i){
                arr[j] = true;
            }
        }
    }
}

int main(){
    sop();
    int T; cin >> T;
    while (T--){
        int uwu; cin >> uwu;
        cout << pl[uwu-1] << "\n";
    }

    // for (int i = 0; i < pl.size(); i++){
    //     cout << pl[i] << "\n";
    // }
    // cout << pl.size();
}