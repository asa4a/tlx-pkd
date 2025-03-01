#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N; cin >> N;
    vector <int> f, e;
    int div = 2;
    while (N > 1){
        if (N % div == 0){
            if (!f.empty() && f[f.size()-1] == div){
                e[e.size()-1]++;
            } else {
                f.push_back(div);
                e.push_back(1);
            }
            N = N/div;
        } else {
            div++;
        }
    }

    for (int i = 0; i < f.size(); i++){
        cout << f[i];
        if (e[i] > 1) cout << "^" << e[i];
        if (i == f.size()-1) break;
        cout << " x ";
    }
}