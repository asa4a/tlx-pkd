#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int unsigned
using namespace std;
vector <ll> A;
vector <ll> B;
vector <ll> output;

int main(){
    int N, K; cin >> N >> K;
    ll sum = 0;
    for (int i = 0; i < N; i++){
        ll tmp; cin >> tmp;
        sum += tmp;
        A.push_back(sum);
    }

    for (int i = 0; i < K; i++){
        ll tmp; cin >> tmp;
        B.push_back(tmp);
        int lb = upper_bound(A.begin(), A.end(), B[i]) - A.begin();
        output.push_back(lb);
    }

    for (auto i : output)
        cout << i << endl;
}