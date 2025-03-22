#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int bubub(vector <ll>& bubi){
    int sz = bubi.size();
    int sw = 0;
    for (int i = 0; i < sz-1; i++){

        bool ftm = false;
        for (int j = 0; j < sz-i-1; j++){
            if (bubi[j] > bubi[j+1]){
                swap(bubi[j], bubi[j+1]);
                ftm = true;
                sw++;
            }
        }

        if (!ftm) break;
    }

    return sw;
}

int main(){
    int N; cin >> N;
    vector <ll> A(N);

    for (int i = 0; i < N; i++) cin >> A[i];
    cout << bubub(A);
}