#include <iostream>
#include <vector>
using namespace std;

bool agakprima(int n){
    int fac = 0;
    for (int i = 1; i*i <= n; i++){
        if (n % i == 0){
            fac++;
            fac++;
        }
        if (i*i == n){
            fac--;
        }
    }
    if (fac*2 < 4){
        cout << " YA\n";
        return 1;
    }
    cout << "BUKAN\n";
    return 0;
}

int main(){
    int N; cin >> N;
    while(N--){
        int num; cin >> num;
        agakprima(num);
    }
}