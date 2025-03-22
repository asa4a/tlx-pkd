#include <iostream>
using namespace std;

int main(){
    long long unsigned int B,C,D; cin >> B >> C >> D;
    long long unsigned int res = 0;
    long long unsigned int CD = C-D;
    if (CD == 0){
        if (B >= C) cout << B-C;
        else cout << 0;
        return 0;
    }
    for(long long unsigned int i = 1; i*i <= CD; i++){
        if (CD % i == 0){
            if (i <= B && C % i == D) res++;
            if (CD/i <= B && CD/i != i && CD/i > D){
                res++;
            }
        }
    }
    cout << res;
}