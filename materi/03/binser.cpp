#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int N;
vector <ll> A(N);

int count(int x, int y){
    int idx = upper_bound(A.begin(), A.end(), x) - A.begin();
    int idy = upper_bound(A.begin(), A.end(), y) - A.begin() - 1;

    if (idx > idy) return 0; 
    return idy - idx + 1;
}

int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        ll smth; cin >> smth;
        A.push_back(smth);
    }

    int Q; cin >> Q;
    while(Q--){
        int x, y; cin >> x >> y;
        cout << count(x,y) << endl;
    }
}