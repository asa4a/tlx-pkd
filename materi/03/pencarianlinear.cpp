#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int INF = 200001;

int main(){
    vector <ll> A(1001);
    int N, X; cin >> N >> X;

    int min = INF;
    int id = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        if (abs(A[i]-X) < min){
            min = abs(A[i]-X);
            id = i;
        }
        else if (abs(A[i]-X) == min && A[i] < A[id]){
            id = i;
        }
    }

    cout << A[id];
}